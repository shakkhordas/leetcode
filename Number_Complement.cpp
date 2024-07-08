class Solution {
public:
    int findComplement(int num) {
        int count = 0, tmp = num;
        while (tmp) {
            count++;
            tmp = tmp>>1;
        }
        count = pow(2, count) - 1;
        return num ^ count;
    }
};
