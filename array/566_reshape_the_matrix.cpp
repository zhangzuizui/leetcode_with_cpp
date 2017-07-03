class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        
        int shape = nums.size() * nums[0].size();
        if (shape != r * c) return nums;
        
        vector<vector<int>> ans(r, vector<int> (c, 0));
        int count = 0;
        
        for (auto a : nums) {
            for (auto num : a) {
                
                ans[count/c][count%c] = num;
                ++count;
                
            }
        }
        
        return ans;
    }
};