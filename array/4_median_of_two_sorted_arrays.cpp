/** 
 * 这是一个典型的分治法题目，换句话说就是解数学题？详细答案看这里
 * https://discuss.leetcode.com/topic/4996/share-my-o-log-min-m-n-solution-with-explanation
 */
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2, nums1);

        vector<int> A(nums1), B(nums2);
        int m = A.size(), n = B.size(), mini = 0, maxi = m, midlen = (m + n + 1) >> 1, i, j;
        double left, right;

        if (m == 0) {
            left = B[(B.size()-1)/2];
            right = B[(B.size()-1)/2+1];
        }

        while (mini <= maxi){

            i = (mini + maxi) >> 1;
            j = midlen - i;            
            if (i > 0 && A[i-1] > B[j]) maxi = i - 1; 
            else if (i < m && A[i] < B[j-1]) mini = i + 1;
            else{
                if (i == 0) left = B[j-1];
                else if (j == 0) left = A[i-1];
                else left = max(A[i-1], B[j-1]);
                break;
            }
        }

        if ((m + n) & 1) {cout << left << endl; return left;}
        else {
            if (i == m) right = B[j];
            else if (j == n) right = A[i];
            else {
                right = min(A[i], B[j]);
            }
            return (left + right) / 2;
        }
    }
};