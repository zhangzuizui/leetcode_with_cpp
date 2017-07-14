class Solution {
public:
    int romanToInt(string s) {
        
        int ans = 0;
        vector<int> value;
        
        for (auto c : s) {
            
            switch (c) {
                case 'I': value.push_back(1);
                    break;
                case 'V': value.push_back(5);
                    break;
                case 'X': value.push_back(10);
                    break;
                case 'L': value.push_back(50);
                    break;
                case 'C': value.push_back(100);
                    break;
                case 'D': value.push_back(500);
                    break;
                case 'M': value.push_back(1000);    
            }
            
        }
        
        int len = value.size();
        value.push_back(0);        
        
        for (int i = 0; i < len; ++i) {            
            if (value[i] >= value[i+1])
                ans += value[i];
            else
                ans -= value[i];
        }
        
        return ans;
        
    }
};