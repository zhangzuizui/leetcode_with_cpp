/**
 * 每一行先遍历一遍，将其转化为84题的形式
 */
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {

        if (matrix.empty() || matrix[0].empty()) return 0;

        vector<int> heights(matrix[0].size(), 0);
        heights.push_back(0);
        int m = matrix.size(), n = matrix[0].size(), max_area = 0;
        for (int i = 0; i < m; ++i) {

            for (int j = 0; j < n; ++j)
                heights[j] = matrix[i][j] == '0' ? 0 : heights[j] + 1;

            stack<int> s;
            s.push(-1);
            for (int j = 0; j < n + 1; ++j) {                
                while (s.top() != -1 && heights[j] < heights[s.top()]) {

                    int h = heights[s.top()];
                    s.pop();
                    max_area = max(max_area, h * (j - s.top() - 1));
                    
                }

                s.push(j);
                
            }
        }

        return max_area;

    }
};
