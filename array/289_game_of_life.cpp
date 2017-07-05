/** 这个思路很关键，靠二进制的高低位表示现态和原态 */
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        if (board.empty()) return;
        int bi = board.size() - 1, bj = board[0].size() - 1;
        
        for (int i = 0; i <= bi; ++i) {
            for (int j = 0; j <= bj; ++j) {

                int count = 0;
                for (int I = max(0, i-1); I <= min(bi, i+1); ++I)
                    for (int J = max(0, j-1); J <= min(bj, j+1); ++J)
                        count += board[I][J] & 1;
                if (count == 3 || count - board[i][j] == 3)
                    board[i][j] |= 2;
                    
            }
        }
        
        for (int i = 0; i <= bi; i++)
            for (int j = 0; j <= bj; j++)
                board[i][j] >>= 1;
    }
};  