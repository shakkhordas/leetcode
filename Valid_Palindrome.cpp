class Solution {
public:
    bool isPalindrome(string s) {
        string ss = "";
        for (int i=0; i<s.length(); i++) {
            if (isdigit(s[i]))
                ss += s[i];
            else if (isalpha(s[i]))
                ss += tolower(s[i]);
        }

        string rev = ss;
        reverse(rev.begin(), rev.end());
        return ss == rev;
    }
};
