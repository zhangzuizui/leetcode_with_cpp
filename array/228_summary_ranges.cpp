class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> ans;
        if (nums.empty()) return ans;
        
        int left = 0, right = 1, len = nums.size();
        string cur;
        
        while (right <= len) {
            
            if (right == nums.size() || nums[right] - nums[right-1] != 1) {
                cur.append(to_string(nums[left]));
                if (left != right - 1) {
                    cur.append("->");
                    cur.append(to_string(nums[right-1]));
                }
                ans.push_back(cur);
                cur.clear();
                left = right;
            }
            ++right;
        }
        
        return ans;
        
    }
};