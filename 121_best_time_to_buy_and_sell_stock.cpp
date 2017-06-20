/* 
 * 仔细一想其实这个题是一个最优化问题
 * 股票只能在左边买右边卖，且目的是找到一个最高利润
 * 那么问题就很简单了，保存一个左边的最小购入价格
 * 对于右边的值都尝试卖一次，保留最高卖价即可
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int buy = 0, profit = 0;
        for (int i = 0; i < len; ++i) {
            if (prices[i] < prices[buy])
                buy = i;
            else
                profit = max(profit, prices[i] - prices[buy]);
        }
        return profit;
    }
};