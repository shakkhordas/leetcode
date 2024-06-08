class Solution {
public:
    int addDigits(int num) {
        // trivial approach
        // while (num%10 != num) {
        //     int res = 0;
        //     while (num) {
        //         res += (num%10);
        //         num /= 10;
        //     }
        //     num = res;
        // }
        // return num;

        return (num == 0) ? 0 : ((num % 9 != 0) ? num % 9 : 9);
    }
};
