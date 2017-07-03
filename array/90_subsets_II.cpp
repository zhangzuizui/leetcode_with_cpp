/*回溯法，不熟，很关键*

void backtrack(vector<vector<int>>& ans,vector<int>& temp,vector<int>& nums,int start)
{
    ans.push_back(temp);
    for(int i=start;i<nums.size();i++)
    {
        if(i>start && nums[i-1]==nums[i])continue;
        temp.push_back(nums[i]);
        backtrack(ans,temp,nums,1+i);
        temp.pop_back();
    }
}

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        vector< vector<int> > ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        
        backtrack(ans,temp,nums,0);
        
        
        return ans;
        
    }
};
*/
/*我用的队列，判断的东西有点多，耗时高*/
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        queue<vector<int>> cur;
        vector<vector<int>> ans;
        cur.push(vector<int> {});
        sort(nums.begin(), nums.end());
        int loc = 0;
        while (loc < nums.size()) {
            int len = cur.size();
            for (int i = 0; i < len; ++i) {
                auto tmp = cur.front();
                cur.pop();
                if (cur.empty())
                    cur.push(tmp);
                else {
                    bool flag = true;
                    if (cur.back().size() != tmp.size())
                        flag = false;
                    for (int i = 0; i < tmp.size() && flag; i++)
                        flag = cur.back()[i] == tmp[i];
                    if (!flag)
                        cur.push(tmp);
                }
                tmp.push_back(nums[loc]);
                cur.push(tmp);
            }
            ++loc;
        }
        
        int len = cur.size();
        for (int i = 0; i < len; ++i) {
            ans.push_back(cur.front());
            cur.pop();
        }
        return ans;
    }
};
