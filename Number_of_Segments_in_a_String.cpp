class Solution {
public:
    int countSegments(string s) {
        int tmp = 0, count = 0, i = 0;
        while (i<s.length()) {
            if (s[i] == ' ') {
                if (tmp) {
                    tmp = 0;
                    count++;
                }
            }
            else tmp++;
            i++;
        }

        if (tmp) count++;

        return count;
    }
};
