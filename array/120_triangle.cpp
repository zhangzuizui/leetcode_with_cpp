/**
 * 依次遍历，保证每个位置存放的值是到达这个位置的最短距离即可
 */
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {

        int len = triangle.size();
        int minimum = INT_MAX;
        for (int i = 1; i < len; ++i) {
            for (int j = 0; j <= i; ++j) {

                if (j == 0)
                    triangle[i][j] += triangle[i-1][j];
                else if (j == i)
                    triangle[i][j] += triangle[i-1][j-1];
                else
                    triangle[i][j] += min(triangle[i-1][j-1], triangle[i-1][j]);
           
            }
        }
        
        for (int i = 0; i < len; ++i)
            minimum = min(minimum, triangle[len-1][i]);

        return minimum;
        
    }
};