/* 题目描述有问题，总之只有一个peak，若端点为peak则以左边哪个为准。*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int left = 0, right = nums.size() - 1;        
        while (left < right - 1) {

            int mid = (left + right) >> 1;
            if (nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1])
                return mid;
            else {
                if (nums[mid] > nums[mid-1])
                    left = mid;
                else
                    right = mid;
            }

        }

        return nums[left] > nums[right] ? left : right;
        
    }
};