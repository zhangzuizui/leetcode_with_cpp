class Solution {
public:
    string convert(string s, int numRows) {
        
        if (numRows == 1) return s;
        
        string ans = "";
        int len = s.size(), interval = 2 * numRows - 2;
        
        for (int i = 0; i < numRows; ++i) {
            
            int j = i;            
            while (j < len) {
                
                ans += s[j];
                if (i != 0 && i != numRows-1) {
                    j += 2 * (numRows - i - 1);
                    if (j < len) ans += s[j];
                    j += 2 * i;
                }
                else j += interval;
                
            }
            
        }
        
        return ans;
        
    }
};