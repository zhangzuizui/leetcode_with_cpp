/** 总之就是用hash */
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        if (k < 0) return 0;
        
        unordered_map<int, int> hash;
        int count = 0;
        for (int n : nums) {
         
            if (hash.find(n) == hash.end()) hash.insert({n, 1});
            else hash[n] = 2;            
            
        }
        
        for (int n : nums) {
            
            if (hash.find(n) != hash.end()) {                
                if (hash[n]) {
                    
                    --hash[n];
                    if (hash[n+k]) ++count;
                    if (k == 0) hash[n] = 0;
                    if (hash[n-k]) ++count;
                    
                    hash[n] = 0;
                }
            }
        }
        
        return count;
        
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