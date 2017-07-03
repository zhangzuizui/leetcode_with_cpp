class Solution {
public:
    int jump(vector<int>& nums) {
        int target = nums.size() - 1;
        if (!target) return 0;
        int l = 0, steps = 0;
        while (l + nums[l] < target){
            int next_idx = 0;
            for (int r = l + 1; r <= l + nums[l]; ++r){
                if (r + nums[r] > next_idx + nums[next_idx]){
                    next_idx = r;
                }
            }
            l = next_idx;
            ++steps;
        }
        return ++steps;
    }
};