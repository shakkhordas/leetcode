class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ans;

        int sr = sqrt(area);
        int maxWidth = 0, maxLength;

        for (int i=1; i<=sr; i++) {
            if (area % i == 0) {
                if (i > maxWidth)
                    maxWidth = i;
            }
        }

        maxLength = area / maxWidth;
        ans.push_back(maxLength);
        ans.push_back(maxWidth);

        return ans;
    }
};
