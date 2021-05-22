#include<iostream>
using namespace std;



int main(){
    int n; cin >> n;
    int curr = 100;
    int ans = curr;

    while (n--){
        int v; cin >> v;
        curr += v;
        ans = max(ans, curr);
    }
    
    cout << ans << endl;
}