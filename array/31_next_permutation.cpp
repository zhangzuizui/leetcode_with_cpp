class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() < 2) return;
        int len = nums.size(), cur_sub = len - 1;
        while (cur_sub > 0){
            if (nums[cur_sub] <= nums[cur_sub-1])
                --cur_sub;
            else
                break;
        }
        if (cur_sub == 0){
            reverse(nums.begin(), nums.end());
        }
        else {
            int cur_change = len - 1;
            while (cur_change >= cur_sub){
                if (nums[cur_change] <= nums[cur_sub-1])
                    --cur_change;
                else 
                    break;
            }
            swap(nums[cur_sub-1], nums[cur_change]);
            reverse(nums.begin()+cur_sub, nums.end());
        }
    }
};