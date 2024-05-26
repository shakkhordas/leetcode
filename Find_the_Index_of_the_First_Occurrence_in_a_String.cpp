class Solution {
public:
    // signed integer overflow for Rabin-Karp Algorithm
    // used long long but the error persists. Says undefined behavior
    int strStr(string haystack, string needle) {
        int pos = haystack.find(needle);
        return pos;
    }
};
