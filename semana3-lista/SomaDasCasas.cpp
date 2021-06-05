#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0;i < n;i++) cin >> a[i];
  int k;
  cin >> k;
  int x, y;
  for (int i = 0, j = n - 1;i < j;) {
    if (a[i] + a[j] > k) j--;
    else if (a[i] + a[j] < k) i++;
    else {
      x = a[i];
      y = a[j];
      break;
    }
  }
  cout << x << " " << y << endl;
  return 0;
}

