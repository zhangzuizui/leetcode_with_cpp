/* 先是自己写魔幻解 */
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        srand(time(NULL));
        vector<int> ans;
        int len = nums.size(), idx = 0, count_idx0 = 0;
        
        while (len != 0) {
            
            int count = 0, tar = nums[idx];
            
            for (int i = 0; i < len; ++i) {
                if (nums[i] == tar) {
                    ++count;
                    nums[i] = nums[0];
                    ++count_idx0;
                }
            }
            if (count > len / 3)
                ans.push_back(tar);
            
            if (count_idx0 > 2*len / 3) break;
            
            while (true) {
                idx = rand() % len;
                if (nums[idx] != nums[0]) break;
            }
            
        }
        
        return ans;
        
    }
};

/* 然后这个是我比较喜欢的思路，容易知道的是，当一个数组中，有一个数的出现次数大于2/n时，通过遍历一遍可以找到这个数
 * 该题其实同理，对于这个题，因为最多有两个解，所以对于这个最多的情况，这两个解的数量的和是大于2/3n的，
 * 类推一下，可以找到最多的这两个数
 */
vector<int> majorityElement(vector<int>& nums) {
    int cnt1 = 0, cnt2 = 0, a=0, b=1;
    
    for(auto n: nums){
        if (a==n){
            cnt1++;
        }
        else if (b==n){
            cnt2++;
        }
        else if (cnt1==0){
            a = n;
            cnt1 = 1;
        }
        else if (cnt2 == 0){
            b = n;
            cnt2 = 1;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    
    cnt1 = cnt2 = 0;
    for(auto n: nums){
        if (n==a)   cnt1++;
        else if (n==b)  cnt2++;
    }
    
    vector<int> res;
    if (cnt1 > nums.size()/3)   res.push_back(a);
    if (cnt2 > nums.size()/3)   res.push_back(b);
    return res;
}