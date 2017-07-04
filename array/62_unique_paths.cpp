/**
 * 因为方向限定了，只能往下走和往右走，也就是说到达A处的路径数跟A处上面的地方B和A处左边的地方C有关
 * 那么到达A处的路径数就是到达B处的路径数+到达C处的路径数
class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> paths(m, vector<int> (n, 1));
        for (int i = 1; i < m; ++i)            
            for (int j = 1; j < n; ++j)                
                paths[i][j] = paths[i-1][j] + paths[i][j-1];
        
        return paths[m-1][n-1];
    }
};

/**
 * 这个使用组合的数学思路特别有意思
 */
class Solution {
public:
        int uniquePaths(int m, int n) {
            int N = n + m - 2;// how much steps we need to do
            int k = m - 1; // number of steps that need to go down
            double res = 1;
            // here we calculate the total possible path number 
            // Combination(N, k) = n! / (k!(n - k)!)
            // reduce the numerator and denominator and get
            // C = ( (n - k + 1) * (n - k + 2) * ... * n ) / k!
            for (int i = 1; i <= k; i++)
                res = res * (N - k + i) / i;
            return (int)res;
        }

};