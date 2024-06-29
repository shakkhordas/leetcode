class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long mx1 = LLONG_MIN, mx2 = LLONG_MIN, mx3 = LLONG_MIN;

        for (int num : nums) {
            if (num > mx1) {
                mx3 = mx2;
                mx2 = mx1;
                mx1 = num;
            } else if (num < mx1 and num > mx2) {
                mx3 = mx2;
                mx2 = num;
            } else if (num < mx2 and num > mx3) mx3 = num;
        }

        return mx3 == LLONG_MIN ? mx1 : mx3;
    }
};
