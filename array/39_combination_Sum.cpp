class Solution {
public:
    void findAns(vector<int> candidates, int begin, int end, int target, vector<int> cur, vector<vector<int>>& ans){
        if (begin <= end){
            while (target >= candidates[begin]){
                findAns(candidates, begin+1, end, target, cur, ans);
                target -= candidates[begin];
                cur.push_back(candidates[begin]);
            }
            if (target == 0)
                ans.push_back(cur);
            return;
        }
        else
            return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        if (candidates.empty()) return vector<vector<int>> {{}};
        sort(candidates.begin(), candidates.end());
        if (candidates[0] > target) return ans;
        int end = candidates.size() - 1;
        while(end > 0 && candidates[end] > target)
            --end;
        findAns(candidates, 0, end, target, vector<int> {}, ans);
        
        return ans;
        
    }
};