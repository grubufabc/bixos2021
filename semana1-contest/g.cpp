#include <bits/stdc++.h>
using namespace std;

#define pb	push_back
#define eb	emplace_back
#define mk	make_pair
#define fi	first
#define se	second
#define endl	'\n'

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

int main() {
    ios_base::sync_with_stdio(false);
    ll xc,xb,xa,x; cin >> xc >> xb >> xa >> x;
    if(x < xa) swap(x,xa);
    if(x < xb) swap(x,xb);
    if(x < xc) swap(x,xc);
    cout << x-xa << " " << x-xb << " " << x-xc << endl;
    return 0;
}

