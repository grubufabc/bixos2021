#include<iostream>
#include<algorithm>
using namespace std;



int main(){
    int t; cin >> t;

    while(t--){
        string str; cin >> str;
        char prev = '0';
        int ans = 0;
        for(char c: str){
            if(prev == '0' and c == '1') ans++;
            prev = c;
        }
        cout << ans << endl;
    }
}