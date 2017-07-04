class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if (!numRows) return ans;
        
        ans.push_back(vector<int> {1});
        vector<int> cur;
        
        for (int i = 0; i < numRows-1; ++i) {      

            int len = ans[i].size();
            for (int j = -1; j < len; ++j) {
                
                if (j == -1) 
                    cur.push_back(1);
                else if (j == len-1)
                    cur.push_back(1);
                else
                    cur.push_back(ans[i][j] + ans[i][j+1]);

            }
            ans.push_back(cur);
            cur.clear();

        }

        return ans;
        
    }
};