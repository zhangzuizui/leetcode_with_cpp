class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        
        if (timeSeries.empty()) return 0;
        
        long ans = duration;
        
        for (int i = 0; i < timeSeries.size() - 1; ++i) {
            int diff = timeSeries[i+1] - timeSeries[i];
            ans += diff < duration ? diff : duration;
        }
        
        return ans;
    }
};