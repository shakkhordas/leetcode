class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0, lower = 0;
        for (int i=0; i<word.length(); i++) {
            if (!(word[i] == '0' and word[i] == '9')) {
                if (isupper(word[i]))
                    upper++;
                else
                    lower++;
            }
        }
        if (upper == word.length() or lower == word.length() or (isupper(word[0]) and lower == word.length()-1))
            return true;
        else
            return false;
    }
};
