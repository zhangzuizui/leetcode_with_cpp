/**
 * 用两次二分查找，先找左边界再找右边界
 */
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
            
        int l_l = 0, l_r = nums.size()-1, l_m;        
        while (l_l < l_r){
            
            l_m = (l_l + l_r) >> 1;
            if (nums[l_m] < target)
                l_l = l_m + 1;
            else 
                l_r = l_m;
        }
        
        if (nums[l_r] != target)
            return vector<int> {-1, -1};
        
        int r_l = l_r, r_r = nums.size()-1, r_m;
        while (r_l < r_r){
            
            r_m = ((r_l + r_r) >> 1) + 1;
            if (nums[r_m] > nums[r_l])
                r_r = r_m - 1;
            else
                r_l = r_m ;
        }
        return vector<int> {l_r, r_l};
    }
};