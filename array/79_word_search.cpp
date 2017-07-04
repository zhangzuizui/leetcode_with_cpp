/**
 * 上下左右天南地北的遍历呗，被遍历到的字符先暂存起来然后用'\0'表示遍历过了，此次搜索全部完成后还原
 */
 
class Solution {
public:
    bool findChar(int i, int j, vector<vector<char>>& board, string::iterator pointer, string::iterator target){

        char tmp = board[i][j];
        board[i][j] = '\0';
        ++pointer; //查下一个字母
        //←
        if (j > 0){
            if (board[i][j-1] == *pointer)
                if (findChar(i, j-1, board, pointer, target)) return true;
        }
        //→
        if (j < board[0].size()-1){
            if (board[i][j+1] == *pointer)
                if (findChar(i, j+1, board, pointer, target)) return true;
        }
        //↑
        if (i > 0){
            if (board[i-1][j] == *pointer)
                if (findChar(i-1, j, board, pointer, target)) return true;
        }
        //↓
        if (i < board.size()-1){
            if (board[i+1][j] == *pointer)
                if (findChar(i+1, j, board, pointer, target)) return true;
        }
        board[i][j] = tmp;
        if (pointer == target) return true;
        else return false;

    }

    bool exist(vector<vector<char>>& board, string word) {

        auto end = word.end(), begin = word.begin();        
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