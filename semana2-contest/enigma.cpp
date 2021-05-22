#include<iostream>
using namespace std;

string s1, s2;
bool check(int start){
    if(start + s2.size()-1 < s1.size()){
        for(int i=0; i < s2.size(); i++){
            if(s2[i] == s1[start+i]) return false;
        }
        return true;
    }
    return false;
}


int main(){
    cin >> s1 >> s2;
    int ans = 0;
    for(int i=0; i < s1.size(); i++){
        ans += check(i);
    }
    cout << ans << endl;
}