class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count = 0, maxConsecutiveOnes = 0;        
        for (int i = 0; i < nums.size(); ++i) {
            
            if (nums[i]) ++count;
            else count = 0;
            maxConsecutiveOnes = max(maxConsecutiveOnes, count);
            
        }
        
        return maxConsecutiveOnes;
        
    }
};