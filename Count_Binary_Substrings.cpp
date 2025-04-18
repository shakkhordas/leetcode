class Solution {
public:
    int countBinarySubstrings(string s) {
        int COUNT = 0, prev = 0, curr = 1;

        for (int i=1; i<s.length(); i++) {
            if (s[i-1] != s[i]) {
                COUNT += min(prev, curr);
                prev = curr;
                curr = 1;
            }
            else curr++;
        }

        COUNT += min(prev, curr);

        return COUNT;
    }
};
