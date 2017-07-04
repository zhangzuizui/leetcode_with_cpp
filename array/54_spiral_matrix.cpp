/**
 * 这个题的做法就是把矩阵从最外层开始，一圈一圈的往里面剥
 * 所以需要用4个变量来记录当前正在剥的子矩阵的左上角位置和右下角位置
 */
class Solution {
public:
    void letsGo(vector<vector<int>> matrix, int up1, int up2, int down1, int down2, vector<int>& ans){
        if (up1 <= down1 && up2 <= down2){
            for (int i = up1, j = up2; i <= down1 && j <= down2; ++j)
                ans.push_back(matrix[i][j]);
            ++up1;
            for (int i = up1, j = down2; i <= down1 && j >= up2; ++i)
                ans.push_back(matrix[i][j]);
            --down2;
            for (int i = down1, j = down2; i >= up1 && j >= up2; --j)
                ans.push_back(matrix[i][j]);
            --down1;
            for (int i = down1, j = up2; i >= up1 && j <= down2; --i)
                ans.push_back(matrix[i][j]);
            ++up2;
            letsGo(matrix, up1, up2, down1, down2, ans);
        }
        else
            return;
    }
    
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return vector<int> {};
        vector<int> ans;
        int down1 = matrix.size() - 1, down2 = matrix[0].size() - 1, up1 = 0, up2 = 0;
        letsGo(matrix, up1, up2, down1, down2, ans);
        return ans;
    }
};