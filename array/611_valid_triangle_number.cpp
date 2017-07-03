/** 
 * 基础版，升序排序后，三角形嘛，前两个加起来大于后一个就行了
 * 于是找最大的那个后一个，算第二大边idx和最大边idx的差
 * 这是固定小的两条边，找最大边的方法n^2logn
 */
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        
        if (nums.size() < 3) return 0;
        sort(nums.begin(), nums.end());
        int cnt = 0, len = nums.size();
        
        for (int i = 0; i < len; ++i) {
            for (int j = i + 1; j < len; ++j) {
                int l = j + 1, r = len - 1, value = nums[i] + nums[j];
                while (l <= r) {
                    int mid = (l + r) >> 1;
                    if (nums[mid] >= value) r = mid - 1;
                    else l = mid + 1;
                }
                cnt += r - j;
            }
        }
        
        return cnt;
        
    }
};
/** 
 * 接下来这个是进阶版，固定最大边和次大边。找满足三角形的最小最小边
 * 最高n^2
 */
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        
        if (nums.size() < 3) return 0;
        sort(nums.begin(), nums.end());
        int cnt = 0, len = nums.size();
        
        for (int i = len-1; i >= 2; --i) {
            int l = 0, r = i-1;
            while (l < r) {
                if (nums[l] + nums[r] > nums[i]) {
                    cnt += r - l;
                    --r;
                }
                else
                    ++l;
            }
        }
        
        return cnt;
        
    }
};