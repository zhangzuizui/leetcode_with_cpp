/* hashmap运用不到位啊，按这个题来看unordered_set的删除和查找的平均时间都是O(1)
 * 是时候看一下STL了
 */
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> arr(nums.begin(), nums.end());
        int res = 0;
        for (int n : nums) {
            if (arr.find(n) == arr.end()) continue;
            arr.erase(n);
            int pre = n, next = n;
            while (arr.find(pre - 1) != arr.end()) arr.erase(--pre);
            while (arr.find(next + 1) != arr.end()) arr.erase(++next);
            res = max(res, next - pre + 1);
        }
        
        //cout << res << endl;
        return res;
    }
};