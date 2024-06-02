class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0, p = 0;
        for (int i=columnTitle.size()-1; i>=0; i--) {
            int val = columnTitle[i] - 'A' + 1;
            res = res + val * pow(26,p);
            p++;
        }
        return res;
    }
};
