class Solution {
public:
    bool findChar(int i, int j, vector<vector<char>>& board, string::iterator pointer, string::iterator target){
        char tmp = board[i][j];
        board[i][j] = '\0';
        //cout << "current word:" << *pointer << endl;
        ++pointer; //查下一个字母
        //←
        if (j > 0){
            if (board[i][j-1] == *pointer){
                //cout << "left" << endl;
                if (findChar(i, j-1, board, pointer, target)) return true;
            }
        }
        //→
        if (j < board[0].size()-1){
            if (board[i][j+1] == *pointer){
                //cout << "right" << endl;
                if (findChar(i, j+1, board, pointer, target)) return true;
            }
        }
        //↑
        if (i > 0){
            if (board[i-1][j] == *pointer){
                //cout << "up" << endl;
                if (findChar(i-1, j, board, pointer, target)) return true;
            }
        }
        //↓
        if (i < board.size()-1){
            if (board[i+1][j] == *pointer){
                //cout << "down" << endl;
                if (findChar(i+1, j, board, pointer, target)) return true;
            }
        }
        board[i][j] = tmp;
        if (pointer == target) return true;
        else return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        auto end = word.end();
        auto begin = word.begin();
        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[0].size(); j++){
                if (board[i][j] == word[0]){ //第一个字母匹配
                    if (findChar(i, j, board, begin, end)) return true;
                }
            }
        }
        return false;
    }
};