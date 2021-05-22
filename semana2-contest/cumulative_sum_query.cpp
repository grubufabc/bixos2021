#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


typedef long long ll;


int main(){
    int n; cin >> n;
    vector<ll> a(n);
    for(auto &ai: a) cin >> ai;

    for(int i=1; i < n; i++) a[i] += a[i-1];

    int t; cin >> t;

    while(t--){
        int l, r; cin >> l >> r;
        if(l == 0) cout << a[r] << endl;
        else cout << a[r] - a[l-1] << endl; 
    }
}