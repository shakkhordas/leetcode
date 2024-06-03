class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> st, ts;
        for (int i=0; i<s.length(); i++) {
            if ((st.find(s[i]) != st.end() and st[s[i]] != t[i]) or
            (ts.find(t[i]) != ts.end() and ts[t[i]] != s[i]))
                return false;
            st.insert(make_pair(s[i], t[i]));
            ts.insert(make_pair(t[i], s[i]));
        }
        return true;
    }
};
