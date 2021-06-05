#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, h;
  cin >> n >> h;
  vector<pair<int, int>> a(n);
  for (int i = 0;i < n;i++) cin >> a[i].first >> a[i].second;
  vector<pair<int, int>> aux;
  for (int i = 1;i < n;i++) {
    aux.emplace_back(a[i - 1].first, a[i].first - a[i - 1].second);
  }
  aux.emplace_back(a.back().first, 1000000001);
  long long ans = 0, sum = 0;
  for (int i = 0, j = 0;;) {
    if (sum < h) {
      sum += aux[j++].second;
    }
    else {
      long long dist = aux[j - 1].first - aux[i].first + h - sum + aux[j - 1].second + a[j - 1].second - a[j - 1].first;
      ans = max(ans, dist);
      sum -= aux[i++].second;
      if (j == n) break;
    }
  }
  cout << ans << endl;
  return 0;
}

