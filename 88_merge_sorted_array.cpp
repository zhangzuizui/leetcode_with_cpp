/*这个题是有问题的，但是这个解题的思想可以学一下*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int cur1 = m - 1;
        int cur2 = n - 1;
        int ans = m + n - 1;
        while (cur1 >= 0 && cur2 >= 0) {
            if (nums1[cur1] > nums2[cur2])
                nums1[ans--] = nums1[cur1--];
            else 
                nums1[ans--] = nums2[cur2--];
        }
        while (cur2 >= 0)
            nums1[ans--] = nums2[cur2--];
    }
};