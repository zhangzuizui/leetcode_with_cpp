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