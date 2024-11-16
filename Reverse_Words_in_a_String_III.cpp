class Solution {
public:
    string reverseWords(string s) {
        int i=0, n=s.length();

        while (i < n) {
            int finish = i;

            while (finish < n and s[finish] != ' ')
                finish++;

            int p=i, q=finish-1;
            while (p <= q) {
                swap(s[p], s[q]);
                p++;
                q--;
            }

            i = finish+1;

        }

        return s;
    }
};
