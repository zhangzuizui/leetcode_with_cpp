class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) return true;
        if (flowerbed.size() == 1) return (1 - flowerbed[0]) >= n;
        int pre = 0, cnt = 0, next;
        for (int i = 0; i < flowerbed.size() && cnt < n; i++){
            next = i == flowerbed.size()-1 ? 0 : flowerbed[i+1];
            if (pre == 0 && flowerbed[i] == 0 && next == 0){
                cnt++;
                flowerbed[i] = 1;
            }
            pre = flowerbed[i];
        }
        return cnt >= n;
    }
};