class Solution {
  public:
    int lengthOfLongestSubstring(string s) {
      vector<bool> used(256, false);
      int ans = 0;
      for (int i = 0, j = 0;s[j];) {
        if (used[s[j]]) {
          used[s[i++]] = false;
        }
        else {
          used[s[j++]] = true;
          ans = max(ans, j - i);
        }
      }
      return ans;
    }
};
