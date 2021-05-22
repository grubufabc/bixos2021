#include<iostream>
#include<vector>
using namespace std;


int main(){
    int a, b, c; cin >> a >> b >> c;
    vector<int> counter(10, 0);
    counter[a]++;
    counter[b]++;
    counter[c]++;

    int has2 = false;

    for(int c: counter) has2 |= (c == 2);

    if(has2) cout << "Yes" << endl;
    else cout << "No" << endl;
}