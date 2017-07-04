/**
 * 记录两个状态位置，一个是在位置i时，能够跳跃到的最远位置
 * 一个是在当前位置经过一次跳跃能够跳跃到的最远位置
 * 在 i > curMaxJump(当前位置能够跳跃到的最大位置) 时，就应该考虑进行下一次跳跃了
 * 也就是说，这个curMaxJump实际上记录的是一个区间，不妨设点经过上一次跳跃，跳到了位置1
 * 在位置1跳跃一次最多能跳到位置4，即curMaxJump = 4, 那么i就blabla遍历到了4，到4了之后，iMaxJump会记录
 * 在区间[1,4]能够跳跃到的最远位置(不需要知道是从[1,4]的具体哪个位置起跳能跳到最远，
 * 只需要知道这个区间能跳到某个最远位置即可)，设这个最远位置是7，那么当i遍历到5的时候
 * 因为超出了区间，所以需要在区间[1,4]内进行一次起跳，从[1,4] -> [5,7] 同不需要具体只要起跳位置一样，
 * 每次起跳的到达位置也不需要确定，每次确定的是起跳区间与到达区间。
 */
class Solution {
public:
    int jump(vector<int>& nums) {
        
        int iMaxJump = 0, curMaxJump = 0, steps = 0;
        for (int i = 0; i < nums.size(); ++i) {
            
            if (i > curMaxJump) {
                curMaxJump = iMaxJump;
                ++steps;
            }
            iMaxJump = max(iMaxJump, i+nums[i]);
        }
        
        return steps;
    }
};