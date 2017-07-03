/**
 * 标准回溯法
 */
class Solution {
public:
    void backTracking(vector<vector<int>>& ans, vector<int> c, int target, int end, vector<int>& cur) {
        
        if (target < 0) return;
        if (target == 0) {
            ans.push_back(cur);
            return;
        }
        for (int i = end; i >= 0; --i) {
            
            cur.push_back(c[i]);
            backTracking(ans, c, target-c[i], i, cur);
            cur.pop_back();
        }
    }
        
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        if (candidates.empty()) return ans;
        
        sort(candidates.begin(), candidates.end());
        int end = candidates.size() - 1;
        while(end > 0 && candidates[end] > target) --end;
        
        vector<int> cur;
        backTracking(ans, candidates, target, end, cur);
                
        return ans;
        
    }
};