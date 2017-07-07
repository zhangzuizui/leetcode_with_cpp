/**
 * ascii字符一共256个，这个用来hash
 * 其实是一个动态规划的题
 * 联系1是maxLen，2是当前子串
 */
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> hash(256, -1);
        int l = -1, len = s.size(), maxLenth = 0;
        
        for (int i = 0; i < len; ++i) {
            
            if (hash[s[i]] > l)                
                l = hash[s[i]];
            hash[s[i]] = i;
            maxLenth = max(maxLenth, i - l); 
            
        }
        
        return maxLenth;
        
    }
};