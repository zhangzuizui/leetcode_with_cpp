/**
 * 这个动态规划的思路就在于，找到什么样的数据有成为最大的潜力，当然是：当前值最大或者最小的那两个数
 * 所以保留最大最小就行了
 */
class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int curMaxPre = nums[0], curMinPre = nums[0];
        int totalMax = nums[0];
        int len = nums.size();
        int curMax, curMin;
        for (int i = 1; i < len; ++i) {

            curMax = max(max(curMaxPre*nums[i], curMinPre*nums[i]), nums[i]);
            curMin = min(min(curMaxPre*nums[i], curMinPre*nums[i]), nums[i]);
            totalMax = max(curMax, totalMax);
            curMaxPre = curMax;
            curMinPre = curMin;
            
        }

        return totalMax;

    }
};
