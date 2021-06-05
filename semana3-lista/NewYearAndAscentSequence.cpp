#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  cin >> n;
  vector<pair<int, int>> a, b;
  long long asc = 0;
  for (int i = 0;i < n;i++) {
    int x;
    cin >> x;
    vector<int> v(x);
    bool desc = true;
    int l = 1000000, r = 0;
    for (int j = 0;j < x;j++) {
      cin >> v[j];
      l = min(l, v[j]);
      r = max(r, v[j]);
      if (j and v[j] > v[j - 1]) desc = false;
    }
    if (desc) a.emplace_back(l, r), b.emplace_back(r, l);
    else asc++;
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  long long ans = n * asc + (long long)a.size() * asc;
  for (int i = 0;i < a.size();i++) {
    int m = a[i].first;
    ans += a.size() - (lower_bound(b.begin(), b.end(), make_pair(m + 1, 0)) - b.begin());
  }
  cout << ans << endl;
  return 0;
}

