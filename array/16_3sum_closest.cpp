/** 
 * 题15的改版，多加入一个变量用来保存最小绝对差，复杂度O(n^2)
 */
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end(), [](int a, int b){return a < b;});
        int left, right, cur_sum3, sum3 = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.size(); ++i){
            
            left = i+1, right = nums.size()-1;
            if (i!=0 && nums[i] == nums[i-1])
                continue;
            while (left < right){
                
                cur_sum3 = nums[i] + nums[left] + nums[right];
                if (abs(target-sum3) > abs(target-cur_sum3))
                    sum3 = cur_sum3;
                if (target > cur_sum3){
                    ++left;
                }
                else if (target < cur_sum3){
                    --right;
                }
                else
                    return cur_sum3;
            }
        }
        return sum3;
    }
};