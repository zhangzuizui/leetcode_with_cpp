/** 最棒的回溯例题 */

class Solution {
private:    
    vector<string> helper{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    void backTracking(string digits, int begin, vector<string>& ans, string& str, vector<string> helper) {
        
        if (digits.size() == begin)
            ans.push_back(str);
        
        for (int i = begin; i < digits.size(); ++i) {
            
            if (digits[i] <= '1' || digits[i] > '9') return;
            
            for (int j = 0; j < helper[digits[i]-'0'].size(); ++j) {                
                str += helper[digits[i]-'0'][j];
                backTracking(digits, i+1, ans, str, helper);
                str.pop_back();                
            }
            
            if (i == begin) return;
            
        }
    }
    
public:   
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        string str;
        
        if (digits.empty()) return ans;
        
        backTracking(digits, 0, ans, str, helper);
        
        return ans;
        
    }
};