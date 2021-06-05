#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n - 1), f(n);
  for (int i = 0;i < n - 1;i++) cin >> a[i];
  for (int i = 0;i < n;i++) cin >> f[i];
  for (int i = 0;i < m;i++) {
    int x;
    cin >> x;
    int p = upper_bound(a.begin(), a.end(), x) - a.begin();
    cout << f[p] << " ";
  }
  cout << endl;
  return 0;
}

