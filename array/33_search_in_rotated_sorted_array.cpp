/**
 * 实际就是二分查找
 */
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        if (nums.empty()) return -1;
        int low = 0, high = nums.size() - 1, mid;
        
        while (low < high) {
            mid = (low + high) >> 1;
            if (nums[mid] == target) return mid;
            if (nums[mid] > nums[high]) {
                if (nums[mid] < target || nums[high] >= target)
                    low = mid + 1;
                else
                    high = mid;
            }
            else if (nums[mid] < nums[high]) {
                if (nums[mid] < target && nums[high] >= target)
                    low = mid + 1;
                else
                    high = mid;
            }
        }
        return nums[low] == target ? low : -1;
    }
};