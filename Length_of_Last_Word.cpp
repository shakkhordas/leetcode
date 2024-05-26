class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1, count = 0;
        while (!isalpha(s[i]))
            i--;

        while (i>=0) {
            if (s[i] == ' ')
                break;
            count++;
            i--;
        }

        return count;
    }
};
