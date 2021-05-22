#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


bool run(vector<int> &bulbs, vector<int> cmd){
    for(int c: cmd) bulbs[c]++;
    bool flag = true;
    for(int b: bulbs) flag &= (b%2 == 0);
    return flag;
}

int main(){
    int n, m; cin >> n >> m;
    vector<int> bulbs(m+1, 0);
    vector<vector<int>> cmds(n);
    int l; cin >> l;
    while(l--){
        int xi; cin >> xi;
        bulbs[xi]++;
    }

    for(int i=0; i < n; i++){
        int k; cin >> k;
        while(k--){
            int yi; cin >> yi;
            cmds[i].push_back(yi);
        }
    }

    
    vector<int> empty_vector = vector<int>();
    if(run(bulbs, empty_vector)) cout << 0 << endl;
    else{
        int ans = -1;

        for(int i=0; i < 2*n; i++){
            int idx = i%n;
            if(run(bulbs, cmds[idx])){
                ans = i+1;
                break;
            }
        }
        cout << ans << endl;
    }
}