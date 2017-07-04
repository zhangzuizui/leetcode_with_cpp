class Solution {
public:
    void BackTracking(vector<int> nums, vector<vector<int>> &ans, vector<int>& cur, int begin, int len){
        
        for (int i = begin; i < len; ++i) {
            cur.push_back(nums[i]);
            BackTracking(nums, ans, cur, i+1, len);
            cur.pop_back();
        }
        ans.push_back(cur);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> cur;
        vector<vector<int>> ans;
        BackTracking(nums, ans, cur, 0, nums.size());
        
        return ans;
        
    }
};