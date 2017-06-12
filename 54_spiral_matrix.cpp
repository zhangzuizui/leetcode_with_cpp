class Solution {
public:
    void letsGo(vector<vector<int>> matrix, int lui, int luj, int rdi, int rdj, vector<int>& ans){
        if (lui <= rdi && luj <= rdj){
            for (int i = lui, j = luj; i <= rdi && j <= rdj; ++j)
                ans.push_back(matrix[i][j]);
            ++lui;
            for (int i = lui, j = rdj; i <= rdi && j >= luj; ++i)
                ans.push_back(matrix[i][j]);
            --rdj;
            for (int i = rdi, j = rdj; i >= lui && j >= luj; --j)
                ans.push_back(matrix[i][j]);
            --rdi;
            for (int i = rdi, j = luj; i >= lui && j <= rdj; --i)
                ans.push_back(matrix[i][j]);
            ++luj;
            letsGo(matrix, lui, luj, rdi, rdj, ans);
        }
        else
            return;
    }
    
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return vector<int> {};
        vector<int> ans;
        int rdi = matrix.size() - 1, rdj = matrix[0].size() - 1, lui = 0, luj = 0;
        letsGo(matrix, lui, luj, rdi, rdj, ans);
        return ans;
    }
};