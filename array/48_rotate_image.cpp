/**
 * 第一个思路就是根据题意，一个位置一个位置对应的进行90°旋转
 */
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int tmp, n = matrix.size();
        for (int i = 0; i <= (n - 1) >> 1; ++i){
            for (int j = i; j < n - 1 - i; ++j){
                tmp = matrix[i][j];
                matrix[i][j] = matrix[n-1-j][i];
                matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
                matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
                matrix[j][n-1-i] = tmp;
            }
        }
    }
};
/**
 *这个思路很有意思,是先以45°角的数据为轴进行180°翻转，再一x轴为轴，进行180°反转，
 *不知道歪果仁脑子怎么想的系列（初始手掌心面对自己，4跟手指向左，然后按45°翻转180°变成
 *手掌心背对自己，4跟手指向下，再按x轴反转180°，手掌心对面自己，4跟手指向上，完美）
 */

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size() - 1;
        for (int i = 0; i <= m; ++i) {
            for (int j = 0; j < m-i; ++j) {
                swap(matrix[i][j], matrix[m-j][m-i]);
            }
        }
        for (int i = 0; i < (m+1)/2; ++i) {
            swap(matrix[i], matrix[m-i]);
        }
    }
};