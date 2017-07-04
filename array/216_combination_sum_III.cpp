/* 没啥说的，标准回溯，就是回溯条件的判定注意一下 */
class Solution {
public:
    void backTracking(int k, int n, int begin, vector<vector<int>>& ans, vector<int>& cur) {
        
        if (n == 0 && k == 0) ans.push_back(cur);
        else if (n <= 0 || k <= 0) return;
        else {
            for (int i = begin; i <= 10-k; ++i) {
                cur.push_back(i);
                backTracking(k-1, n-i, i+1, ans, cur);
                cur.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> ans;
        vector<int> cur;
        backTracking(k, n, 1, ans, cur);
        
        return ans;
        
    }
};