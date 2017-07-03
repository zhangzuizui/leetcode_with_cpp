class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
        vector<int> heights(matrix[0].size(), 0);
        heights.push_back(0);
        int m = matrix.size(), n = matrix[0].size(), max_area = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                heights[j] = matrix[i][j] == '0' ? 0 : heights[j] + 1;
            }
            stack<int> s;
            s.push(-1);
            for (int j = 0; j < n + 1; ++j) {
                while (s.top() != -1 && heights[j] < heights[s.top()]) {
                    int h = heights[s.top()];
                    s.pop();
                    max_area = max(max_area, h * (j - s.top() - 1));
                    //cout << "i = " << i << "\tj = " << j << "\ts = " << s.top() << endl;
                }
                s.push(j);
            }
        }
        return max_area;
    }
};

/*很棒的动态规划思路
class Solution {public:
int maximalRectangle(vector<vector<char> > &matrix) {
    if(matrix.empty()) return 0;
    const int m = matrix.size();
    const int n = matrix[0].size();
    int left[n], right[n], height[n];
    fill_n(left,n,0); fill_n(right,n,n); fill_n(height,n,0);
    int maxA = 0;
    for(int i=0; i<m; i++) {
        int cur_left=0, cur_right=n; 
        for(int j=0; j<n; j++) { // compute height (can do this from either side)
            if(matrix[i][j]=='1') height[j]++; 
            else height[j]=0;
        }
        for(int j=0; j<n; j++) { // compute left (from left to right)
            if(matrix[i][j]=='1') left[j]=max(left[j],cur_left);
            else {left[j]=0; cur_left=j+1;}
        }
        // compute right (from right to left)
        for(int j=n-1; j>=0; j--) {
            if(matrix[i][j]=='1') right[j]=min(right[j],cur_right);
            else {right[j]=n; cur_right=j;}    
        }
        // compute the area of rectangle (can do this from either side)
        for(int j=0; j<n; j++)
            maxA = max(maxA,(right[j]-left[j])*height[j]);
    }
    return maxA;
}
*/