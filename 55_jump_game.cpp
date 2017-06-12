class Solution {
public:
    bool canJump(vector<int>& nums) {
        int z = nums.size() - 1, a = z;
        for (int i = z; i >= 0; --i){
            if (nums[i] + i >= a){
                a = i;
            }
        }
        return a == 0;
    }
};
/*更好的方法如下
这个题最好的方法还是从小到大遍历，有一个好处就是只需要遍历到一个nums[i] + i >= z就可以跳出循环了
而如果要从大到小遍历的话，数组肯定会完完整整的遍历一遍（一直到遍历到0时才能判断true or false)
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_loc = 0, z = nums.size() - 1;
        for (int i = 0; i < z && i <= max_loc && max_loc < z; ++i){
            max_loc = max(max_loc, nums[i] + i);
        }
        return max_loc >= z;
    }
};
*/