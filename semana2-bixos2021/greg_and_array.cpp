#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

struct Info {
    int l, r; ll d;

    Info(int l, int r, ll d){
        this->l = l;
        this->r = r;
        this->d = d;
    }
};


int main(){
    int n, m, k; cin >> n >> m >> k;
    vector<ll> a(n+10, 0ll);
    
    for(int i=1; i <= n; i++) cin >> a[i];

    vector<Info> cmds; cmds.push_back(Info(0,0,0));

    for(int i=1; i <= m; i++){
        int l, r; ll d; cin >> l >> r >> d;
        cmds.push_back(Info(l, r, d));
    }

    vector<ll> ops(m+10, 0);

    for(int i=0; i < k; i++){
        int l, r; cin >> l >> r;
        ops[l]++;
        ops[r+1]--;
    }

    for(int i=1; i < ops.size(); i++) ops[i] += ops[i-1];

    vector<ll> dp(n+10, 0);

    for(int i=1; i <= m; i++){
        Info cmd = cmds[i];
        dp[cmd.l] += ops[i] * cmd.d;
        dp[cmd.r+1] -= ops[i] * cmd.d;
    }

    for(int i=2; i <= n; i++) dp[i] += dp[i-1];

    for(int i=1; i <= n; i++) cout << a[i]+dp[i] << " ";
    cout << endl;
}