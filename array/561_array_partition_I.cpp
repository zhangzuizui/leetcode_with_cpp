class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int ans = 0, len = nums.size();
        
        for (int i = 0; i < len; ++i)
            ans += nums[i++];
            
        return ans;
    }
};