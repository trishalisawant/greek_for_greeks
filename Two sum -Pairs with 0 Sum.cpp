// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
         set<int> seen;
    set<vector<int>> result;

    for (int x : arr) {
        if (seen.count(-x)) {
            int a = min(x, -x);
            int b = max(x, -x);
            result.insert({a, b});
        }
        seen.insert(x);
    }

    vector<vector<int>> ans(result.begin(), result.end());
    return ans;
    }
};
