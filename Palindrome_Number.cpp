class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        string original = to_string(x);
        string revers = original;
        reverse(revers.begin(), revers.end());
        if (original == revers) return true;
        return false;
    }
};
