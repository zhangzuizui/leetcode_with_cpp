class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0, l = 0, r = height.size() - 1, l_max = 0, r_max = 0;
        while (l <= r){
            if (height[l] <= height[r]){ //小的一方计算，因为另外一边有更大的所以肯定可以加
                if(height[l] >= l_max)
                    l_max = height[l];
                else
                    ans += l_max - height[l];
                ++l;
            }
            else {
                if(height[r] >= r_max)
                    r_max = height[r];
                else
                    ans += r_max - height[r];
                --r;
            }
        }
        return ans;
    }
};