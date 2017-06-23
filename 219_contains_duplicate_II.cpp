/* map的思路就不说了，这个思路很不错 */
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_set<int> hash;
        
        for (int i = 0; i < nums.size(); ++i) {
            
            if (i > k) hash.erase(nums[i - k - 1]);
            if (hash.find(nums[i]) != hash.end()) return true;
            hash.insert(nums[i]);
            
        }
        
        return false;
        
    }
};