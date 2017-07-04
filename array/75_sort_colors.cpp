/**
 * 1的位置不动，把2放到最后，把0放到最前面
 */

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int nums0 = 0, nums2 = nums.size() - 1;
        for (int i = 0; i <= nums2; ++i){

            while (nums[i] == 2 && i < nums2) swap(nums[i], nums[nums2--]);
            while (nums[i] == 0 && i > nums0) swap(nums[i], nums[nums0++]);
            
        }
    }
};