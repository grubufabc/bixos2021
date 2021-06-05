#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0;i < n;i++) cin >> a[i];
  double l = 0, r = m;
  sort(a.begin(), a.end());
  while (abs(l - r) > 0.0001) {
    double d = (l + r) / 2;
    double last = 0;
    bool ok = true;
    for (int i = 0;i < (int)a.size();i++) {
      if (!ok) break;
      if (a[i] - d > last + 0.0001) ok = false;
      last = a[i] + d;
    }
    if (last + 0.0001 < m) ok = false;
    if (ok) r = d;
    else l = d;
  }
  cout << fixed << setprecision(2) << r << endl;
  return 0;
}

