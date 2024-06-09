class Solution {
public:
    void process(string sentence, vector<string>& result) {
        string temp = "";
        for (int i=0; i<sentence.length(); i++) {
            if (sentence[i] == ' ') {
                result.push_back(temp);
                temp = "";
            }
            else
                temp += sentence[i];
        }
        if (temp != "") result.push_back(temp);
    }
    bool wordPattern(string pattern, string s) {
        vector<string> result;
        process(s, result);

        if (pattern.length() != result.size()) return false;

        unordered_map<char, string> p2s;
        unordered_map<string, char> s2p;

        for (int i=0; i<pattern.length(); i++) {
            if ((p2s.find(pattern[i]) != p2s.end() and p2s[pattern[i]] != result[i])
            or s2p.find(result[i]) != s2p.end() and s2p[result[i]] != pattern[i])
                return false;
            p2s.insert(make_pair(pattern[i], result[i]));
            s2p.insert(make_pair(result[i], pattern[i]));
        }

        return true;

    }
};
