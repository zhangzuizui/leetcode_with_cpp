/**
 * 没啥好说的
 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int c = 1, tmp, z = digits.size() - 1;
        for (int i = z; i >= 0; --i) {

            tmp = digits[i] + c;
            digits[i] = tmp % 10;
            c = tmp / 10;

        }

        if (c) digits.insert(digits.begin(), 1);

        return digits;
    }
};