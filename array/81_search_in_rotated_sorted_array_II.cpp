/**
 * 同上一题，不过需要注意一个会出现重复数的情况
 */

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        if (nums.empty()) return false;
        int low = 0, high = nums.size() - 1;
        int mid;        
        while (low < high) {

            mid = (low + high) >> 1;
            if (nums[mid] == target) return true;

            if (nums[mid] > nums[high]) {
                if (target > nums[mid] || target <= nums[high]) {
                    low = mid + 1;
                } 
                else 
                    high = mid;
            }
            else if (nums[mid] < nums[high]) {
                if (target > nums[mid] && target <= nums[high])
                    low = mid + 1;
                else 
                    high = mid;
            }
            else 
                --high;

        }
        
        return nums[low] == target;
        
    }
};