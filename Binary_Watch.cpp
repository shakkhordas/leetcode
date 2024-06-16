class Solution {
public:
    int ledCount(int n) {
        int res = 0;
        while (n) {
            res++;
            n = n & (n-1);
        }
        return res;
    }
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for (int i=0; i<12; i++) {
            for (int j=0; j<60; j++) {
                int a = ledCount(i);
                int b = ledCount(j);
                if (a + b == turnedOn) {
                    string hour = to_string(i);
                    string minutes = (j < 10) ? ("0" + to_string(j)) : to_string(j);
                    ans.push_back(hour + ":" + minutes);
                }
            }
        }
        return ans;
    }
};
