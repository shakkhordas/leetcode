class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels{'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

        int left = 0, right = s.size() - 1;
        while (left <= right) {
            if ( vowels.find(s[left]) != vowels.end() and vowels.find(s[right]) != vowels.end() ) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
            else if ( vowels.find(s[left]) != vowels.end() ) right--;
            else if ( vowels.find(s[right]) != vowels.end() ) left++;
            else {
                left++;
                right--;
            }
        }
        return s;
    }
};
