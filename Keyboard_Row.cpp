class Solution {
public:
    bool isSubset(const string& word, const string& charSet) {
        for (char ch : word) {
            if (charSet.find(ch) == std::string::npos) {
                return false;
            }
        }
        return true;
    }
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop", row2 = "asdfghjkl", row3 = "zxcvbnm";
        vector<string> ans;

        for (const auto& word: words) {
            string w = word;
            transform(w.begin(), w.end(), w.begin(), ::tolower);
            if (isSubset(w, row1) or isSubset(w, row2) or isSubset(w, row3))
                ans.push_back(word);
        }

        return ans;
    }
};
