class Solution {
public:
    int findPivot(vector<int> nums, int l, int r){
        if (l < r-1){
            int mid = (l + r) / 2;
            if (nums[l] > nums[r]){
                if (nums[mid] > nums[r])
                    return findPivot(nums, mid, r);
                else
                    return findPivot(nums, l, mid);
            }
            else
                return l;
        }
        else {
            return l;
        }
    }
    int binarySearch(vector<int> nums, int l, int r, int target){
        if (l <= r){
            int mid = (l + r) / 2;
            if (nums[mid] < target)
                return binarySearch(nums, mid+1, r, target);
            else if (nums[mid] > target)
                return binarySearch(nums, l, mid-1, target);
            else
                return mid;
        }
        else
            return -1;
    }
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0) return -1;
        else if (nums.size() == 1) return nums[0] == target ? 0 : -1;
        else{
            int pivot;
            if (nums[0] < nums[nums.size()-1])
                return binarySearch(nums, 0, nums.size()-1, target);
            pivot = findPivot(nums, 0, nums.size()-1);
            return max(binarySearch(nums, 0, pivot, target), binarySearch(nums, pivot+1, nums.size()-1, target));
        }
    }
};