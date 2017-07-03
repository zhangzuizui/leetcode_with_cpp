/**
 * 一种基于数学的解法
 * 这个题要搞懂什么叫"下一个排列"，容易知道的是，一个序列的第一种排列，是从小到大的排列方式，
 * 然后这个序列的最后一种排列，是从大到小的排列方式，例如 1,2,3,4,5 和 5,4,3,2,1
 * 那么中间的变化是怎样一种模式？这里需要找到当前排列的变化部分，比如 
 * 1,4,2,5,3 因为 2 < 5, 所以 5,3 是这个子排列的最后一种形式，因此
 * 想要变化到下一种排列，需要结合前面的 2, 因为 5,3 中第一个大于 2 的数, 是 3。因此把 2 和 3 交换
 * 就从 2,5,3 -> 3,5,2 然后把 5,2 反转 就有 3,5,2 -> 3,2,5 即 1,4,2,5,3 -> 1,4,3,2,5
 * 可以理解为，之前是 2 在掌握 5 和 3 的生杀大权, 但是 5,3 已经是 2 能掌握到的生杀大权的最后一次了，
 * 这时就要换下一个数来进行"生杀"，这个"下一个数"就是比 2 大的第一个数 3, 交换位置后，后面的子串的排列
 * 依然是从大到小的排列，但是现在 3 是第一次掌握大权，子串排列应该是从小到大，因此再进行一次字符串反转
 */
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() < 2) return;
        int len = nums.size(), cur_sub = len - 1;
        
        while (cur_sub > 0){
            
            if (nums[cur_sub] <= nums[cur_sub-1])
                --cur_sub;
            else
                break;
        }

        if (!cur_sub) {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        int change = len - 1;
        while (change > cur_sub){
            
            if (nums[change] <= nums[cur_sub-1])
                --change;
            else 
                break;
        }
        
        swap(nums[cur_sub-1], nums[change]);
        reverse(nums.begin()+cur_sub, nums.end());
    }
};