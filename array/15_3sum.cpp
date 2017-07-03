/** 
 * 题1双指针版本的升级版，就最外层多遍历一次，并且注意避免添加重复解,复杂度O(n^2)
 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result;
        int left, right, pre;
        
        if (nums.size() < 3) return result;
        
        sort(nums.begin(), nums.end(), [](int a, int b){return a < b;});        
        if (nums.back() < 0) return result;
            
        for (int i = 0; i < nums.size()-2; ++i){
            
            if (nums[i] > 0) break;
            if (i != 0 && nums[i] == nums[i-1]) continue;
            
            left = i+1, right = nums.size()-1, pre = nums[0]-1;
            
            while (left < right){
                
                if (nums[left]+nums[right] == -nums[i]){                    
                    if (nums[left] == pre)
                        ++left;
                    else{
                        result.push_back(vector<int> {nums[i], nums[left], nums[right]});
                        pre = nums[left];
                        ++left;
                    }
                }                
                else if (nums[left]+nums[right] < -nums[i])
                    ++left;
                else 
                    --right;
                    
            }
        }
        return result;
    }
};