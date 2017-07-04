/** 某种意义上来说是双指针题，归位型题型 */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int l = 0, len = nums.size();
        for (int i = 0; i < len; ++i)            
            if (nums[i]) nums[l++] = nums[i];
        
        for (int i = l; i < len; ++i)
            nums[i] = 0;
        
    }
};