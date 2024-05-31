class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > pascalsTriangle(numRows);
        pascalsTriangle[0].push_back(1);

        for (int i=1; i<numRows; i++) {
            for (int j=0; j<=i; j++) {
                if (j == 0 || j == i)
                    pascalsTriangle[i].push_back(1);
                else {
                    if (j>0)
                        pascalsTriangle[i].push_back(pascalsTriangle[i-1][j-1]+pascalsTriangle[i-1][j]);
                }
            }
        }

        return pascalsTriangle;
    }
};
