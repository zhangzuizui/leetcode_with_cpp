/**
 * 用hashset一个，然后对每个满足条件的目标数（hash中存在） 分别向左向右查找，并把查到的数删去
 */
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> hash(nums.begin(), nums.end());
        int res = 0;
        for (int n : nums) {

            if (hash.find(n) == hash.end()) continue;

            hash.erase(n);
            int pre = n, next = n;
            while (hash.find(pre - 1) != hash.end()) hash.erase(--pre);
            while (hash.find(next + 1) != hash.end()) hash.erase(++next);
            res = max(res, next - pre + 1);

        }
               
        return res;

    }
};