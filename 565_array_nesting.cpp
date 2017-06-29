/** 记录状态位系列 */
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        
        int ans = 0, maxlen = INT_MIN;
        
        
        for (int i = 0; i < nums.size(); ++i) {
            ans = 0;
            int hh = i;
            while (nums[hh] >= 0) {
                int tmp = nums[hh];
                nums[hh] = -1;
                hh = tmp;
                ++ans;
            }
            maxlen = max(ans, maxlen);
        }
        
        return maxlen;
        
    }
};