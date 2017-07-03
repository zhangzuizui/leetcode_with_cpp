/** 
 * 我的思路是正向思路，找数组左侧的连续部分时，从左扫描
 * 找数组右侧的连续部分时，从右侧扫描
 * 这样做会出现一个问题就是：虽然我得到了两个连续部分
 * 但是确定左边连续部分时，右边有值未扫描过，
 * 确定右边连续部分时，左边的值未扫描过。
 * 于是需要再一次做判断，进一步精确左右两个区间，
 * 步骤繁琐不说，增加了很多的判断条件，让人容易迷糊
 */
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int len = nums.size();
        if (len < 2) return 0;
        if (nums.front() > nums.back()) return len;
        
        int l = 0, r = len - 1, flagl = 1, flagr = 1;
        while (l < r) {
            
            if (nums[l] <= nums[r]) {
                if (flagl && nums[l] <= nums[l+1]) ++l;
                else if (flagr && nums[r-1] <= nums[r]) --r;
                else break;
            }
            else {
                if (flagl && l != 0 && nums[l-1] <= nums[r]) {--l; flagl = 0;}
                else {++r; flagr = 0;}
            }
        }
        
        cout << l << "  " << r << endl;
        if (l == r) return 0;
        int midMin = INT_MAX, midMax = INT_MIN;
        
        for (int i = l + 1; i < r; ++i) {
            
            midMin = min(nums[i], midMin);
            midMax = max(nums[i], midMax);
            
        }
        
        for (int i = 0; i <= l; ++i)
            if (nums[i] > midMin) {l = i - 1; break;}
        for (int i = len-1; i >= r; --i)
            if (nums[i] < midMax) {r = i + 1; break;}
            
        return r - l - 1;
     }
};

/**
 * 这个思路是，确定左边的区间时，从右边开始扫，并且完整的扫描一遍
 * 反之亦然，这样两次扫描后就直接确定了两个区间(因为不存在未判断的部分)
 */
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int s = -1, e = -2, m = nums[0], n = nums.back();
        for (int i = 1; i < nums.size(); i++) {
            m = max(nums[i], m);
            n = min(nums[nums.size()- i - 1], n);
            if (nums[i] < m) e = i;
            if (nums[nums.size()- i - 1] > n) s = nums.size() - i - 1;
        }
        return e - s + 1;
    }
};