/** 这是双指针思路很棒 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int head = 0;
        int tail = nums.size() - 1;
        while (head != tail) {

            int sum = nums[head] + nums[tail];

            if (target < sum) tail--;
            else if (target > sum) head++;
            else break

        }
        
        return vector<int> {head+1, tail+1};
    }
};
/** 二分查找思路 */
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int begin = 0;
        int left, right = numbers.size();
        while (begin < right) {

            left = begin + 1;
            int find = target - numbers[begin];
            while (left < right) {
                int mid = (left + right) >> 1;
                if (numbers[mid] == find) 
                    return vector<int> {begin+1, mid+1};
                if (numbers[mid] > find) right = mid - 1;
                else left = mid + 1;
            }
            if (numbers[right] == find)
                return vector<int> {begin+1, right+1};

            ++begin;

        }
    }
};
