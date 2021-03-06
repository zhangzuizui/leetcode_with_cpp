/**
 * 很显而易见的，这是个最优化问题，使用动态规划解决
 * 所以问题的关键就变成了子问题的拆分
 * 那么子问题应该怎么找？
 * 容易知道这道题扩展一下，其实就是最多交易k次，赚最多的钱
 * 现在就需要想一下当交易k-1次是，应该满足什么情况
 * 很显而易见的就是，对于当前遍历到的元素及其左边的元素，在最多交易k-1次的情况下，具有最高利润
 * 简单的说就是当需要找这第k次交易的时候，我们手里已经有最多的钱了
 * 那么问题就转化为了，现在我们手里有X元，在剩下的数组[A1,A2,A3,...,A4]中最多交易一次，求怎样交易手里的钱最多。
 * 那么什么时候买入，什么时候卖？
 * 考虑到实际上这个子问题并不是一个独立的问题，需要与之前的k-1次联系起来。
 * 那么怎么联系起来？通过一个类似于"打折"的方式
 * 经过k-1次交易我已经赚了m元，就相当于我第k次购入股票时，股票的价格便宜了m元
 * 这样就联系起来了，也就是说我以 prices[i]-m 元购入股票，看啥时候卖赚的最多就行
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int gain1 = 0, gain2 = 0;
        int buy1 = INT_MAX, buy2 = INT_MAX;
        for (int i = 0; i < len; ++i) {
            
            gain2 = max(gain2, prices[i] - buy2);
            buy2 = min(buy2, prices[i] - gain1); //之前经过一次买卖赚了钱，相当于下次一购入的时候股票变便宜了
            gain1 = max(gain1, prices[i] - buy1);
            buy1 = min(buy1, prices[i]);
            
        }
        return gain2;
    }
};