/**
 * 就是idx存放要求中的序列，按要求中的，每隔一个位置的数，肯定是不一样的，(比如第一个数和第三个数不一样)
 * 所以取这种不一样的数放到每隔一个位置的地方就行
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int idx = 0;
        for (int i = 0; i < nums.size(); i++) {
            
            if (idx < 2 || nums[i] != nums[idx - 2]) {
                nums[idx++] = nums[i];
            }
            
        }
        
        return idx;
        
    }
};