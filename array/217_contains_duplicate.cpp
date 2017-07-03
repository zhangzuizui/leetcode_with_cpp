/* 研究下set和unordered_set在性能上有什么区别，好伐就是看STL */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int> myset(nums.begin(), nums.end());
        
        return myset.size() != nums.size();
        
    }
};