/** 哎 垃圾题，就是注意int的最大最小值 */
class Solution {
public:
    int myAtoi(string str) {
        
        long ans = 0;
        int begin = 0, flag = 0, len = str.size();
        if (str.empty()) return 0;
        while (str[begin] == ' ') ++begin;
        if (begin == len) return 0;
        else if (str[begin] == '-' || str[begin] == '+') flag = str[begin++] == '-';
        else if (str[begin] < '0' || str[begin] > '9') return 0;
        
        for (int i = begin; i < len; ++i){
            if (str[i] >= '0' && str[i] <= '9') ans = 10 * ans + (str[i] - '0');
            else break;
            if (i - begin == 10) return flag == 1 ? INT_MIN : INT_MAX;
        }
                 
        if (1 == flag) ans *= -1; 
        
        if (ans < INT_MIN) return INT_MIN;
        if (ans > INT_MAX) return INT_MAX;
        
        return ans;
        
    }
};