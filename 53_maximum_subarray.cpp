class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //最优化问题可以用动态规划处理，其关键是找子问题
        //该题的子问题是:找到子串的最大子串(有点绕口？)
        //要想到:在遍历过程中，应该什么时候放弃这个子串
        //就是当这个子串的和小于该子串最后一个元素的值的时候:此时，将该元素值纳入下一个子串，因为随着元素的遍历，下一个子串
        //通过遍历能够得到的最大子串和大于两串联合，并且上一子串已经扫描得到了最大子序列和了
        //用一个变量存放最大的子序列和即可
        if (nums.size() == 1) return nums[0];
        int cur_max = nums[0], ans = nums[0];
        for (int i = 1; i < nums.size(); ++i){
            cur_max = max(cur_max + nums[i], nums[i]);
            ans = max(cur_max, ans);
        }
        return ans;
        
    }
};a