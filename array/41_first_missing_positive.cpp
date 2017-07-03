/**
 * 因为要找的是第一个miss的正数，所以把每一个正数的num都放在num-1的位置
 * 然后再遍历一遍发现哪个正数num不在num-1位置就行了
 */
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if (nums.empty()) return 1;
        for (int i = 0; i < nums.size(); ++i){
            while (nums[i] > 0 && nums[i] <= nums.size() && nums[i] != nums[nums[i]-1])
                swap(nums[i], nums[nums[i]-1]);
        }
        
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != i + 1)
                return i + 1;
        }
        
        return nums.size() + 1;
    }
};