class Solution {
public:
    string addStrings(string num1, string num2) {
        if (num1.size() < num2.size()) {
            string add = "";
            for (int i=0; i<num2.size()-num1.size(); i++) add += '0';
            num1 = add + num1;
        } else {
            string add = "";
            for (int i=0; i<num1.size()-num2.size(); i++) add += '0';
            num2 = add + num2;
        }
        int i = num1.size() - 1, carry = 0;
        string res = "";
        while (i>0) {
            int x = num1[i] - '0';
            int y = num2[i] - '0';
            int toAdd = x + y + carry;
            res += to_string(toAdd%10);
            if (toAdd >= 10) carry = toAdd / 10;
            else carry = 0;
            i--;
        }

        reverse(res.begin(), res.end());
        int x = num1[0] - '0';
        int y = num2[0] - '0';
        int toAdd = x + y + carry;

        res = to_string(toAdd) + res;

        return res;

    }
};
