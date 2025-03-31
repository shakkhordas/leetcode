class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if (ops.empty()) return m * n;

        int min1 = INT_MAX, min2 = INT_MAX;

        for (vector<int>v : ops) {
            if (v[0] < min1) min1 = v[0];
            if (v[1] < min2) min2 = v[1];
        }

        return min1 * min2;

    }
};
