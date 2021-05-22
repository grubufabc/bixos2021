#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


const int INF = 1e9;
const int N = 100;
int M[N][N];

int query(int i1, int j1, int i2, int j2){
    if(min({i1, j1, i2, j2}) < 0) return 0;
    if(i1 == 0 and j1 == 0) return M[i2][j2];
    else{
        int tl = query(0, 0, i1-1, j1-1);
        int l = query(0, 0, i2, j1-1);
        int t = query(0, 0, i1-1, j2);
        return M[i2][j2] - l - t + tl;
    }
}

int main(){
    int n; cin >> n;
    
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cin >> M[i][j];
        }
    }


    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            int tl = query(0, 0, i-1, j-1);
            int l = query(0, 0, i, j-1);
            int t = query(0, 0, i-1, j);
            int curr = M[i][j];
            M[i][j] = l+t-tl+curr;
        }
    }

    int maxAns = -INF;

    for(int i1=0; i1 < n; i1++){
        for(int i2=i1; i2 < n; i2++){
            for(int j1=0; j1 < n; j1++){
                for(int j2=j1; j2 < n; j2++){
                    maxAns = max(maxAns, query(i1, j1, i2, j2));
                }
            }
        }
    }

    cout << maxAns << endl;
}