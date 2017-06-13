class Solution {
public:
    void chooseOrNot(vector<int> nums, vector<vector<int>> &ans, vector<int> cur_set, int cur){
        if (cur < nums.size()){
            chooseOrNot(nums, ans, cur_set, cur+1);
            cur_set.push_back(nums[cur]);
            chooseOrNot(nums, ans, cur_set, cur+1);
            ans.push_back(cur_set);
            
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> cur_set;
        vector<vector<int>> ans;
        chooseOrNot(nums, ans, cur_set, 0);
        ans.push_back(vector<int> {});
        return ans;
    }
};