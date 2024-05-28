class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;
        int i = a.size()-1, j = b.size()-1;
        while (i>-1 && j>-1) {
            if (a[i] == '0' && b[j] == '0') {
                if (carry) {
                    res += '1';
                    carry = 0;
                }
                else
                    res += '0';
            }
            else if ((a[i] == '0' && b[j] == '1')||(a[i] == '1' && b[j] == '0')) {
                if (carry)
                    res += '0';
                else
                    res += '1';
            }
            else {
                if (carry)
                    res += '1';
                else {
                    res += '0';
                    carry = 1;
                }
            }
            i--;
            j--;
        }
        while (i>-1) {
            if (a[i] == '0') {
                if (carry) {
                    res += '1';
                    carry = 0;
                }
                else
                    res += '0';
            }
            else {
                if (carry)
                    res += '0';
                else
                    res += '1';
            }
            i--;
        }
        while (j>-1) {
            if (b[j] == '0') {
                if (carry) {
                    res += '1';
                    carry = 0;
                }
                else
                    res += '0';
            }
            else {
                if (carry)
                    res += '0';
                else
                    res += '1';
            }
            j--;
        }

        if (carry) res += '1';

        reverse(res.begin(), res.end());
        return res;
    }
};
