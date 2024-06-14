class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() > t.size()) return false;
        int k = 0;

        for (int i=0; i<t.size(); i++) {
            if (k == s.size()) return true;
            if (s[k] == t[i]) k++;
        }

        if (k == s.size()) return true;

        return false;
    }
};
