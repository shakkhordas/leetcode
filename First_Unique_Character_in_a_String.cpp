class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> um;

        for (int i=0; i<s.size(); i++) um[s[i]]++;

        int ans = -1;
        for (int i=0; i<s.size(); i++) {
            if (um[s[i]] < 2) {
                ans = i;
                break;
            }
        }

        return ans;
    }
};
