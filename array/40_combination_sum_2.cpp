/*
注意回溯法的使用，不要简单的递归
正确的使用回溯法可以少开很多空间，节省大量的空间与时间
*/
class Solution {
public:
    void findAns(vector<int> candidates, int target, vector<vector<int>>& ans, int begin, int end, vector<int>& cur){
        
        for (int i = begin; target >= candidates[begin] && i <= end; ++i){
            if (i == begin || candidates[i] != candidates[i-1]){
                cur.push_back(candidates[i]);
                findAns(candidates, target-candidates[i], ans, i+1, end, cur);
                cur.pop_back();
            }
        }
        
        if (target == 0){
            ans.push_back(cur);
            return;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        if (candidates.empty()) return vector<vector<int>> {{}};
        vector<vector<int>> ans;
        vector<int> cur;
        sort(candidates.begin(), candidates.end());
        findAns(candidates, target, ans, 0, candidates.size()-1, cur);
        
        return ans;
    }
};