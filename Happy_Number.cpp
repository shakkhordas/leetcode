class Solution {
public:
    bool isHappy(int n) {
        if (n == 1 or n == 7)
            return true;
        else {
            long long res = 0;
            while (n > 9) {
                int i = n;
                while (i>0) {
                    int digit = i%10;
                    res = res + digit * digit;
                    i /= 10;
                }
                if (res == 1 or res == 7)
                    return true;
                n = res;
                res = 0;
            }
        }
        return false;
    }
};
