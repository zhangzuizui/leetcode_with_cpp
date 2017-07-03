/**
 * 题15的升级版，再多嵌套一层系列，复杂度O(n^3)
 */
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int left, right, len = nums.size(), cur_sum, pre_value;
        if (len < 4)
            return ans;
        for (int i = 0; i < len-3; ++i){
            
            if (i != 0 && nums[i] == nums[i-1])
                continue;
            for (int j = i+1; j < len-2; j++){
                
                if (j != i+1 && nums[j] == nums[j-1])
                    continue;
                left = j+1, right = len-1, pre_value = nums[0]-1;
                while (left < right){
                    
                    cur_sum = nums[i] + nums[j] + nums[left] + nums[right];
                    if (cur_sum < target)
                        ++left;
                    else if (cur_sum > target)
                        --right;
                    else{
                        if (pre_value == nums[left])
                            ++left;
                        else{
                            ans.push_back(vector<int> {nums[i], nums[j], nums[left], nums[right]});
                            pre_value = nums[left];
                            ++left;
                        }
                    }
                }
            }
        }

        return ans;
        
    }
};