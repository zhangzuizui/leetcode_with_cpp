/**
 * 这个题两个思路
 * 一是数组排序后，首尾开双指针，复杂度O(nlogn)
 * 二是按<值, 脚标>的方式，存到map里，每遍历一个数就找map里有没有相应的值，复杂度O(nlogn)
 * 下面题解用法2
 */
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