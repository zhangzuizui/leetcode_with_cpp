class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        
        int minNum = arrays[0].front(), maxNum = arrays[0].back(), ans = 0;
        for (int i = 1; i < arrays.size(); ++i) {
            
            ans = max(ans, max(abs(arrays[i].back()-minNum), abs(arrays[i].front()-maxNum)));
            minNum = min(minNum, arrays[i].front());
            maxNum = max(maxNum, arrays[i].back());
            
        }
        
        return ans;
    }
};