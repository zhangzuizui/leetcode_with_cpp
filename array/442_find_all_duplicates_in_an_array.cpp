/**
 * 上面的一个是归位型思路，下面那个是改变信息表现方式的思路
 */
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans;        
        for (int i = 0; i < nums.size(); ++i) {

            while (i != nums[i] - 1 && nums[i] != nums[nums[i]-1]) {
                swap(nums[i], nums[nums[i]-1]);
            }

        }

        for (int i = 0; i < nums.size(); ++i) {

            if (i != nums[i] - 1)
                ans.push_back(nums[i]);

        }

        return ans;

    }
};

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> duplicates {0};
        for(int i=0; i<nums.size();i++) {

            if(nums[abs(nums[i])-1]<0) duplicates.push_back(abs(nums[i]));
            else nums[abs(nums[i])-1]*=-1;

        }
        
        duplicates.erase(duplicates.begin());

        return duplicates;

    }
};