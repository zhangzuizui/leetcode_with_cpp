/**
 * 有个问题就是，红黑树的时间复杂度虽然是nlogn，但是也要看对于n是什么而言的，
 * 在这个题里面，如果只维护一个大小为3的set，那么对这个set的操作就是O(1)
 * 所以并不是要求O(n)了就肯定不能用红黑树
 */
 class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> top3;
        for (int n : nums) {
            if (top3.insert(n).second && top3.size() > 3)
                top3.erase(top3.begin());
        }
        return top3.size() > 2 ? *top3.begin() : *top3.rbegin();
    }
};