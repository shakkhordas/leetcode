class Solution {
public:
    int longestPalindrome(string s) {
        int res = 0;

        unordered_set<char> seen;

        for (char c: s) {
            if (seen.find(c) != seen.end()) {
                seen.erase(c);
                res += 2;
            }
            else seen.insert(c);
        }

        if (seen.size()) res += 1;

        return res;
    }
};
