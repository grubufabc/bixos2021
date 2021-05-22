#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){
    int n; cin >> n;
    int gte3200 = 0;

    vector<int> colors(8, false);

    while(n--){
        int ai; cin >> ai;
        if(ai >= 3200) gte3200++;
        else colors[ai/400] = true;
    }

    int count = 0;
    for(int c: colors) count += c;

    cout << max(1, count) << " " << count+gte3200 << endl;
}