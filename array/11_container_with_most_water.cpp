/**
 * 头尾双指针，高度小的那个往里遍历(肯定要保留高度相对较高的线才可能得到最大面积，因为面积是按高度小的线算的)
 */
class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int max_s = 0, left = 0, right = height.size()-1;
        
        while (left != right){
            
            max_s = max(min(height[left], height[right]) * (right - left), max_s);
            if (height[left] <= height[right]) 
                left++;
            else 
                right --;
        }
        
        return max_s;
    }
};