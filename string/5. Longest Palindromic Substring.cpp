/** 居然有这种直接O(n^2)的题。。。 */
class Solution {
public:    
    string longestPalindrome(string s) {
        
        int len = s.size();
        int max_len = 1, begin = 0;
        
        for (int i = 0; i < len; ++i) {
            
            if (len - i <= max_len / 2) break;
            int l = i, r = i;            
            while (r + 1 < len && s[r+1] == s[l]) ++r;
            i = r;
            while (l > 0 && r < len - 1 && s[l-1] == s[r+1]) {++r; --l;}
            
            int cur_len = r - l + 1;            
            if (cur_len > max_len) {
                begin = l;
                max_len = cur_len;
            }
            
        }
        
        return s.substr(begin, max_len);
        
    }
};