/* https://discuss.leetcode.com/topic/17446/6-suggested-solutions-in-c-with-explanations 很棒 */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int major = nums[0], count = 1;
        for (int i = 1; i < nums.size(); ++i) {

            if (!count) {
                major = nums[i];
                ++count;
            }
            else if (nums[i] == major)
                ++count;
            else
                --count;
                
        }
        return major;
    }
};