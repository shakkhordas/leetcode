class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        int res = 0;

        if (s.size() < 2)
            return roman[s[0]];

        for (int i=s.size()-1; i>0; i--) {
            if (roman[s[i]] > roman[s[i-1]]) {
                res += roman[s[i]] - roman[s[i-1]];
                i = i-1;
            }
            else
                res += roman[s[i]];
        }

        if (s.size()>1) {
            if (roman[s[0]] >= roman[s[1]])
                res += roman[s[0]];
        }

        return res;
    }
};
