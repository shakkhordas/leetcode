class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str="";
        int minLength = INT_MAX;
        for (string s:strs) {
            if (s.length() < minLength) {
                minLength = s.length();
                str = s;
            }
        }
        int count = 0;
        for (int j=0; j<minLength; j++) {
            for (int i=0; i<strs.size(); i++) {
                if (strs[i][j] != str[j])
                    return str.substr(0, count);
            }
            count++;
        }
        return str.substr(0, count);
    }
};
