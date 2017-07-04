/** 思路基本同54 */
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int> (n, 0));
        int cnt = 1;
        int up1 = 0, up2 = 0, down1 = n - 1, down2 = n - 1;
        while (cnt <= n * n){
            for (int i = up1, j = up2; j <= down2; ++j)
                ans[i][j] = cnt++;
            ++up1;
            for (int i = up1, j = down2; i <= down1; ++i)
                ans[i][j] = cnt++;
            --down2;
            for (int i = down1, j = down2; j >= up2; --j)
                ans[i][j] = cnt++;
            --down1;
            for (int i = down1, j = up2; i >= up1; --i)
                ans[i][j] = cnt++;
            ++up2;
        }
        return ans;
    }
};