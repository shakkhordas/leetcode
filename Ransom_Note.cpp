class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.length() > magazine.length()) return false;

        unordered_map<char, int> mg;

        for (int i=0; i<magazine.length(); i++) mg[magazine[i]]++;

        for (int i=0; i<ransomNote.length(); i++) {
            if (mg.find(ransomNote[i]) == mg.end() or mg[ransomNote[i]] < 1)
                return false;
            mg[ransomNote[i]]--;
        }

        return true;
    }
};
