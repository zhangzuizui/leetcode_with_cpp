class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_set<int> hash;
        
        for (int i = 0; i < nums.size(); ++i) {
            
            //只维护一个size为k的hash，保证hash内没有重复的数
            if (i > k) hash.erase(nums[i - k - 1]);
            if (hash.find(nums[i]) != hash.end()) return true;
            hash.insert(nums[i]);
            
        }
        
        return false;
        
    }
};