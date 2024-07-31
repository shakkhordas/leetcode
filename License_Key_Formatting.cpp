class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string toCheck = "";
        for (char c: s) {
            if (c != '-') {
                isalpha(c) ? toCheck += toupper(c) : toCheck += c;
            }
        }

        int i = 0, len = toCheck.length();
        int rem = len % k;

        string ans = "";

        while (rem--) {
            ans += toCheck[i];
            i++;
        }

        while (i < toCheck.length()) {
            if (i>0) ans += '-';
            int loop = k;
            while (loop--) {
                ans += toCheck[i];
                i++;
            }
        }

        return ans;

    }
};
