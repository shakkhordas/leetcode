class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        int carry = 0;
        int temp = digits[digits.size()-1] + 1;

        if (temp > 9) carry = 1;

        res.push_back(temp%10);

        for (int i=digits.size()-2; i>=0; i--) {
            temp = carry + digits[i];
            if (temp > 9) carry = 1;
            else carry = 0;
            res.push_back(temp%10);
        }

        if (carry) res.push_back(carry);

        reverse(res.begin(), res.end());
        return res;

    }
};
