#include <iostream>
#include <vector> // array do c++

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<long long> a(n);
  for (int i = 0;i < n;i++) {
    cin >> a[i];
  }
  vector<vector<long long>> ops(m, vector<long long>(3)); // cria uma matriz de tamanho m por 3
  for (int i = 0;i < m;i++) {
    for (int j = 0;j < 3;j++) {
      cin >> ops[i][j];
    }
  }
  vector<int> onda1(m, 0), onda2(n, 0); // cria dois arrays zerados, de tamanhos m e n respectivamente
  for (int i = 0;i < k;i++) {
    int x, y;
    cin >> x >> y;
    onda1[x - 1]++;
    if (y < m) {
      onda1[y]--;
    }
  }
  for (int i = 0;i < m - 1;i++) {
    onda1[i + 1] += onda1[i];
  }
  for (int i = 0;i < m;i++) {
    long long l = ops[i][0];
    long long r = ops[i][1];
    long long d = ops[i][2];
    onda2[l - 1] += d * onda1[i];
    if (r < n) onda2[r] -= d * onda1[i];
  }
  for (int i = 0;i < n - 1;i++) {
    onda2[i + 1] += onda2[i];
  }
  for (int i = 0;i < n;i++) {
    cout << a[i] + onda2[i] << " ";
  }
  cout << endl;
  return 0;
}

