#include <iostream>

using namespace std;

int mat[101][101];

int main() {
  int n;
  cin >> n;
  for (int i = 1;i <= n;i++) {
    for (int j = 1;j <= n;j++) {
      cin >> mat[i][j];
      mat[i][j] += mat[i - 1][j] + mat[i][j - 1] - mat[i - 1][j - 1];
    }
  }
  int ans = 0;
  for (int i = 0;i < n;i++) {
    for (int j = 0;j < n;j++) {
      for (int k = i + 1;k <= n;k++) {
        for (int l = j + 1;l <= n;l++) {
          ans = max(ans, mat[k][l] - mat[i][l] - mat[k][j] + mat[i][j]);
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}

