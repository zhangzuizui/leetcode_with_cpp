/** 
 *仔细一想其实这个题是一个最优化问题
 * 股票只能在左边买右边卖，且目的是找到一个最高利润
 * 那么问题就很简单了，保存一个左边的最小购入价格
 * 对于右边的值都尝试卖一次，保留最高卖价即可
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int len = prices.size();
        int buy = INT_MAX, profit = 0;
        for (int i = 0; i < len; ++i) {

            profit = max(profit, prices[i] - buy);
            buy = min(buy, prices[i]);
        
        }
        
        return profit;

    }
};
/**
 * 这个跟之前有一个题的潜力值理论很像
 * 只要利润还大于0就可以保留累加（即只要profit>0那么仍然是个潜力股）
 * 若利润<0了就马上换新股，大致是这个意思
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int len = prices.size();
        int maxp = 0, profit = 0;
        for (int i = 1; i < len; ++i) {
            
            if (profit > 0)
                profit += prices[i] - prices[i-1];
            else
                profit = prices[i] - prices[i-1];
            
            maxp = max(profit, maxp);
            
        }
        
        return maxp;
        
    }
};