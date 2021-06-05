#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxArea(vector<int>& height) {
    int area = 0;
    for (int i = 0, j = height.size() - 1;i < j;) {
      for (int mh = 0;mh <= 10000 and i < j;mh++) {
        while (i < j and height[i] <= mh) i++;
        while (i < j and height[j] <= mh) j--;
        area = max(area, (j - i) * min(height[i], height[j]));
      }
    }
    return area;
  }
};

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0;i < n;i++) cin >> a[i];
  Solution ans;
  cout << ans.maxArea(a) << endl;
  return 0;
}

