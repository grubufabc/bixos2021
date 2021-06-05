#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), sc(2, 0);
  for (int i = 0;i < n;i++) cin >> a[i];
  for (int i = 0, j = n - 1, k = 0;i <= j;k ^= 1) {
    if (a[i] > a[j]) sc[k] += a[i++];
    else sc[k] += a[j--];
  }
  for (int i = 0;i < sc.size();i++) cout << a[i] << " ";
  cout << endl;
  return 0;
}

