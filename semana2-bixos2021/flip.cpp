#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



int main(){
    int n, m, k; cin >> n >> m >> k;

    bool flag = false;

    for(int row=0; row <= n; row++){
        for(int col=0; col <= m; col++){
            int black = row*m + col*n - 2*row*col;
            int white = n*m - black;
            flag |= (black == k);
            flag |= (white == k);
        }
    }


    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}