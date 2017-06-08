class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int l, int r){
        int mid = (l + r) >> 1;
        if (l <= r){
            if (nums[mid] < target)
                return binarySearch(nums, target, mid+1, r);
            else
                return binarySearch(nums, target, l, mid-1);
        }
        else
            return max(l, r);
    }
    int searchInsert(vector<int>& nums, int target) {
        if (nums.empty())
            return 0;
        return binarySearch(nums, target, 0, nums.size()-1);
    }
};