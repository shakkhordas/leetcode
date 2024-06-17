class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        unsigned int n = static_cast<unsigned int>(num);
        const char hex[] = "0123456789abcdef";
        string ans = "";

        while (n) {
            ans += hex[n%16];
            n /= 16;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
