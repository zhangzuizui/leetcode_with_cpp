/* 没啥好说的，注意这里的push_back真的是特别慢，最底下的方法是效率最高的 */
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> output;
        int productAll = 1;
        int zeros = 0;
        
        for (int n : nums) {
            
            if (n == 0) ++zeros;
            else productAll *= n;
        }
            
        for (int n : nums) {
            
            if (zeros == 0) 
                output.push_back(productAll / n);
            else if (zeros == 1 && n == 0) 
                output.push_back(productAll);
            else 
                output.push_back(0);
        }
            
        return output;
        
    }
};
/* 这个方法不错，通用性更高不用考虑劳什子0，点赞，实质就是正序乘一遍，倒叙乘一遍 */
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int fromBegin=1;
        int fromLast=1;
        vector<int> res(n,1);
        
        for(int i=0;i<n;i++){
            res[i]*=fromBegin;
            fromBegin*=nums[i];
            res[n-1-i]*=fromLast;
            fromLast*=nums[n-1-i];
        }
        return res;
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> output(nums.size(), 1);
        int productAll = 1;
        int zeros = 0;
        
        for (int n : nums) {
            
            if (n == 0) ++zeros;
            else productAll *= n;
        }
            
        for (int i = 0; i < nums.size(); ++i) {
            
            if (zeros == 0) 
                output[i] = productAll / nums[i];
            else if (zeros == 1 && nums[i] == 0) 
                output[i] = productAll;
            else 
                output[i] = 0;
        }
            
        return output;
        
    }
};