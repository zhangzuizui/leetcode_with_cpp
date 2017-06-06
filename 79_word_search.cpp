class Solution {
public:
    bool findChar(set<int> myset, int i, int j, vector<vector<char>>& board, string::iterator pointer, string::iterator target){
        myset.insert({board[0].size()*i+j}); //插入set
        //cout << "current word:" << *pointer << endl;
        ++pointer; //查下一个字母
        //←
        if (j > 0){
            if (board[i][j-1] == *pointer && myset.find(board[0].size()*i+j-1) == myset.end()){
                //cout << "left" << endl;
                if (findChar(myset, i, j-1, board, pointer, target)) return true;
            }
        }
        //→
        if (j < board[0].size()-1){
            if (board[i][j+1] == *pointer && myset.find(board[0].size()*i+j+1) == myset.end()){
                //cout << "right" << endl;
                if (findChar(myset, i, j+1, board, pointer, target)) return true;
            }
        }
        //↑
        if (i > 0){
            if (board[i-1][j] == *pointer && myset.find(board[0].size()*(i-1)+j) == myset.end()){
                //cout << "up" << endl;
                if (findChar(myset, i-1, j, board, pointer, target)) return true;
            }
        }
        //↓
        if (i < board.size()-1){
            if (board[i+1][j] == *pointer && myset.find(board[0].size()*(i+1)+j) == myset.end()){
                //cout << "down" << endl;
                if (findChar(myset, i+1, j, board, pointer, target)) return true;
            }
        }
        if (pointer == target) return true;
        else return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        auto end = word.end();
        auto begin = word.begin();
        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[0].size(); j++){
                if (board[i][j] == word[0]){ //第一个字母匹配
                    set<int> buff ;
                    if (findChar(buff, i, j, board, begin, end)) return true;
                }
            }
        }
        return false;
    }
};