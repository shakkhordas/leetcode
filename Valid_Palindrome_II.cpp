class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0, r = s.length() - 1;

        while (l < r) {
            if (s[l] != s[r]) {

                string skipL = s.substr(l + 1, r - l);
                string skipR = s.substr(l, r - l);

                string reversedSkipL = skipL, reversedSkipR = skipR;

                reverse(reversedSkipL.begin(), reversedSkipL.end());
                reverse(reversedSkipR.begin(), reversedSkipR.end());

                // cout << skipL << " " << reversedSkipL << endl << skipR << " " << reversedSkipR << endl;

                return (skipL == reversedSkipL) || (skipR == reversedSkipR);

            }
            l++;
            r--;
        }

        return true;
    }
};
