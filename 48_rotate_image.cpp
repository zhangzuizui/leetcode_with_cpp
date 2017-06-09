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
/*这个思路很有意思
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
*/