#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(4, 0));
  for (int i = 0;i < n;i++) a[i][3] = -i - 1;
  for (int i = 0;i < m;i++) {
    for (int j = 0;j < 3;j++) {
      int x;
      cin >> x;
      a[x - 1][j]++;
    }
  }
  sort(a.rbegin(), a.rend());
  for (int i = 0;i < a.size();i++) cout << -a[i][3] << " ";
  cout << endl;
  return 0;
}

