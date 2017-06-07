class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> ans{nums.begin(), nums.end()};
        return ans.size();
    }
};