/** 
 * 这个其实是一个反向思考的题了
 * 就是说虽然我们要找的是连续值的和为K
 * 但是可以转换成找累计和-K后的值，
 * 在之前的累计连续和中出现过
 * https://discuss.leetcode.com/topic/87850/java-solution-presum-hashmap
 */
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> hash{{0, 1}};
        int ans = 0, cum = 0, len = nums.size();
        
        for (int i = 0; i < len; ++i) {
            
            cum += nums[i];
            ans += hash[cum-k];
            hash[cum] += 1;
            
        }
        
        return ans;
        
    }
};