/* 这个解法简直excellent！ 
 * http://keithschwarz.com/interesting/code/?dir=find-duplicate
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int fast = nums[nums[0]];
        int slow = nums[0];
        
        while (fast != slow) {
            
            fast = nums[nums[fast]];
            slow = nums[slow];
            
        }
        int finder = 0;
        
        while (true) {
            
            finder = nums[finder];
            slow = nums[slow];
            if (finder == slow)
                return finder;
                
        }
    }
};