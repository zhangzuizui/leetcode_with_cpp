class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i){
            auto ret = hash.insert({nums[i], i});
            if (!ret.second){
                if (2 * nums[i] == target) return vector<int> {hash[nums[i]], i};
            }
        }
        for (int i = 0; i < nums.size(); ++i)
            if (hash[target - nums[i]]) return vector<int> {i, hash[target - nums[i]]};
    }
};