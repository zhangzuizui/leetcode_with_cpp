/**
 * 题26的升级版，由前后两个变量不相同时，进行数组的修改变为值不是目标值时，进行数组修改，O(n)
 */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int idx = 0, count = 0, len = nums.size(), ans = len;
        for (int i = 0; i < len; ++i) {           
            
            if (nums[i] != val)
                nums[idx++] = nums[i];
            else 
                --ans;
            
        }
        nums.erase(nums.begin()+ans, nums.end());
        
        return ans;
            
    }
};