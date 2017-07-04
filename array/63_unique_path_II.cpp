/**
 * 核心思想同62
 * 把矩阵里存放是否堵路信息转化为有多少条路径能够到达这个点
 */
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if (obstacleGrid[0][0] == 1) return 0;
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        for (int i = 0; i < m; ++i){
            for (int j = 0; j < n; ++j){
                if (obstacleGrid[i][j] == 1)
                    obstacleGrid[i][j] = 0;
                else {
                    if (i == 0 && j == 0)
                        obstacleGrid[0][0] = 1;
                    else if (i == 0)
                        obstacleGrid[i][j] = obstacleGrid[i][j-1];
                    else if (j == 0)
                        obstacleGrid[i][j] = obstacleGrid[i-1][j];
                    else
                        obstacleGrid[i][j] = obstacleGrid[i-1][j] + obstacleGrid[i][j-1];
                }
                //cout << obstacleGrid[i][j] << '\t';
            }
            //cout << endl;
        }
    return obstacleGrid[m-1][n-1];
    }
};