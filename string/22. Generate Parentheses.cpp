class Solution {
private:
    vector<char> chooses{'(', ')'};
public:
    void backTracking(vector<string>& ans, int nl, int nr, int n, string& str, int begin) {
        
        if (n == begin) ans.push_back(str);
        
        for (int i = begin; i < n; ++i) {        

            for (int j = 0; j < 2; ++j) {                
                if (j == 0) {
                    if (nl > 0) {
                        str.push_back(chooses[j]);
                        backTracking(ans, --nl, nr, n, str, i+1);
                        str.pop_back();
                        ++nl;
                    }
                }
                else {
                    if (nl < nr) {
                        str.push_back(chooses[j]);
                        backTracking(ans, nl, --nr, n, str, i+1);
                        str.pop_back();
                        ++nr;
                    }
                    else return;
                }                
            }
            
            if (i == begin) return;   
            
        }
        
    }
    
    vector<string> generateParenthesis(int n) {
        
        string str;
        vector<string> ans;
        
        backTracking(ans, n, n, 2*n, str, 0);
        
        return ans;
        
    }
};

/** 
 * 这个题，有一种简化的写法，如下
 * 首先要知道的是回溯的关键，并不是那个for循环，对于选与不选的问题，for循环的目的只是为了提供[不选]这一选项
 * 回溯的实质还是push backtrack pop
 * 根据这一点，因为这个题是 '(' 和 ')' 的选择问题，所以使用for循环来解答会增加代码的复杂度
 * 但是仿佛这个题真的是一个十分特殊的情况，因为对于以往的题，使用for循环还有一个理由，
 * 就是需要使用for循环里面的暂变量i来表示当前位置应该选择的[项]，而这个题的[项]很明确的只有两个
 * 并且显而易见的，该题的[项]并不需要使用i来强行代替(这个题里我就强行代替了)
 * 所以就酱
 */

class Solution {
    void backtrack(int n, int nleft, int nright, string s, vector<string>& vs) {
        if (nleft == n && nright == n) {
            vs.push_back(s);
            return;
        }
        if (nleft < n) {
            s.push_back('(');
            backtrack(n, nleft+1, nright, s, vs);
            s.pop_back();
        }
        if (nright < nleft) {
            s.push_back(')');
            backtrack(n, nleft, nright+1, s, vs);
            s.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string> vs;
        backtrack(n, 0, 0, s, vs);
        return vs;
    }
};