/** 动态维护一个求和的窗口，和不够就往右边＋，和够了就在左边－，扫描一遍 */
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        
        if (nums.empty()) return 0;
        int left = 0, right = 1, curSum = nums[0];
        int minLen = INT_MAX;
        
        while (left < nums.size()) {
            
            if (curSum < s) {
                if (right == nums.size()) break;
                curSum += nums[right++];
            }
            else {
                minLen = min(minLen, right-left);
                curSum -= nums[left++];
            }
            
        }
        
        return minLen == INT_MAX ? 0 : minLen;
        
    }
};
/** 感觉都是O(n)，但是不知道为啥像上面那样写比下面这个慢很多 */
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        
        if (nums.empty()) return 0;
        int left = 0, right = 0, curSum = 0;
        int minLen = INT_MAX;
        
        while (right < nums.size()) {
            
            curSum += nums[right++];
            while (curSum >= s) {
                minLen = min(minLen, right-left);
                curSum -= nums[left++];
            }
            
        }
        
        return minLen == INT_MAX ? 0 : minLen;
        
    }
};