class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        map<int, int> hash;
        int len = tasks.size(), highest = INT_MIN, maxJobs = 1;
        for (auto ch : tasks) 
            hash[ch-'A'] += 1;
        for (auto it : hash) {
            if (it.second > highest) {
                maxJobs = 1;
                highest = it.second;
            }
            else if (it.second == highest)
                ++maxJobs;
        }
        return max(len, (highest-1) * (n+1) + maxJobs);
    }
};