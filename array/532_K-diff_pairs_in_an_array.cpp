/** 没啥好说的 */
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        if (nums.size() < 2) return 0;
        
        int ans = 0;
        if (k > 0) {
            set<int> s(nums.begin(), nums.end());
            auto l = s.begin(), r = s.begin();
            while (l != s.end() && r != s.end()) {
                int diff = *r - *l;
                if (diff < k) ++r;
                else if (diff > k) ++l;
                else {
                    ++ans;
                    ++r;
                    ++l;
                }
            }
        }
        if (k == 0) {
            sort(nums.begin(), nums.end());
            int pre = nums[0]-1;
            for (int i = 0; i < nums.size()-1; ++i) {
                if (nums[i] == nums[i+1] && pre != nums[i+1])
                    ++ans;
                pre = nums[i];
            }
        }
        return ans;
    }
};

/** 用map做了一下映射 */
class Solution {
public:
	int findPairs(vector<int> &nums, int k) {
	    if(k<0) return 0;
	    sort(nums.begin(), nums.end());
		unordered_map<int,int> mp;
		int ans = 0;
		for (auto &&item :nums) {
			mp[item]++;
		}
		for (auto &&item :mp) {
			if (!k) {
				ans += (int) (item.second > 1);
			} else {
				ans += (int) (mp.count(item.first + k));
			}
		}
		return ans;
	}
};