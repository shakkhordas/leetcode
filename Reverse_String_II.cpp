class Solution {
public:
    string reverseStr(string s, int k) {

        int start, finish, n = s.size();

        if (n < k) {
            reverse(s.begin(), s.end());
            return s;
        }

        for (int i=0; i<s.size(); i=i+2*k) {

            start = i;
            finish = i+(k-1);

            if (finish > n-1)
                finish = n-1;

            while (start < finish) {

                swap(s[start], s[finish]);
                start++;
                finish--;

            }

        }

        return s;

    }
};
