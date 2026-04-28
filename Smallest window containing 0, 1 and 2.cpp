class Solution {
  public:
    int smallestSubstring(string s) {
        int n = s.size();
        
        int count[3] = {0};
        int left = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < n; right++) {
            count[s[right] - '0']++;
            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                minLen = min(minLen, right - left + 1);

                count[s[left] - '0']--;
                left++;
            }
        }

        if (minLen == INT_MAX) return -1;
        return minLen;
    }
};
