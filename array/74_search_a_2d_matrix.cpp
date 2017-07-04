/**
 * 把矩阵拉开摊平看作一个array
 */
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        if (matrix.empty() || matrix[0].empty()) return false;

        int m = matrix.size(), n = matrix[0].size();
        int l1 = 0, l2 = 0, r1 = m - 1, r2 = n - 1, mid1, mid2, diff;        
        while ((r1 - l1) * n +  r2 - l2 >= 0) {

            diff = ((r1 - l1) * n +  r2 - l2) >> 1;
            mid1 = (diff + l2) / n + l1;
            mid2 = (diff + l2) % n;

            if (target == matrix[mid1][mid2])
                return true;
            else if (target > matrix[mid1][mid2]) {
                l1 = (mid1 * n + mid2 + 1) / n;
                l2 = (mid1 * n + mid2 + 1) % n;
            }
            else {
                r1 = (mid1 * n + mid2 - 1) / n;
                r2 = (mid1 * n + mid2 - 1) % n; 
            }

        }
        
        return false;
    }
};