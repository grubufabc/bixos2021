#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n, t; cin >> n >> t;
    vector<int> top(n), bottom(n);

    for(int i=0; i < n; i++) cin >> top[i];
    for(int i=0; i < n; i++) cin >> bottom[i];

    vector<int> prefix_sum(n+10, 0);

    while(t--){
        int i, j; cin >> i >> j;
        prefix_sum[i-1]++;
        prefix_sum[j]--;
    }

    for(int i=1; i < prefix_sum.size(); i++){
        prefix_sum[i] += prefix_sum[i-1];
    }

    for(int i=0; i < n; i++){
        if(prefix_sum[i]%2 == 0) cout << top[i] << " ";
        else cout << bottom[i] << " ";
    }

    cout << endl;
}