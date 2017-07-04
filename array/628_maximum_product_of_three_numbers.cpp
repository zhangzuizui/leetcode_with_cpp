class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        //min1为最小的数, min2为第二小，max1为最大的数。。。。blabla 
        int min1 = INT_MAX, min2 = INT_MAX, max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        for (auto n : nums) {

            if (n > max3) {
                max3 = min(max2, n);
                max2 = min(max1, max(max2, n));
                max1 = max(max1, n);
            }
            if (n < min2) {
                min2 = max(min1, n);
                min1 = min(min1, n);
            }

        }

        return max(min1*min2*max1, max1*max2*max3);

    }
};