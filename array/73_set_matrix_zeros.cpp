/**
 * 这是不开额外空间的解法
 * 就是用col0和row0存放信息：是否把第一列或第一行置为0
 * 然后对矩阵中除第一行和第一列以外的0，假设其位置是(i,j)
 * 把(i,0)和(0,j)置为0，以作为之后刷新这一行和这一列的凭据
 */
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int m = matrix.size(), n = matrix[0].size(), row0 = 0, col0 = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {

                if (matrix[i][j] == 0) {
                    if (i == 0 && j == 0)
                        row0 = col0 = 1;
                    else if (i == 0)
                        row0 = 1;
                    else if (j == 0)
                        col0 = 1;
                    else 
                        matrix[i][0] = matrix[0][j] = 0;

                }
            }
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }

        if (col0) 
            for (int i = 0; i < m; ++i)
                matrix[i][0] = 0;
        if (row0)
            for (int j = 0; j < n; ++j)
                matrix[0][j] = 0;
    }
};