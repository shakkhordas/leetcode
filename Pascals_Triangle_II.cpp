class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int> > pascalsTriangle(rowIndex+1);
        pascalsTriangle[0].push_back(1);

        for (int i=1; i<rowIndex+1; i++) {
            for (int j=0; j<=i; j++) {
                if (j == 0 || j == i)
                    pascalsTriangle[i].push_back(1);
                else {
                    if (j>0)
                        pascalsTriangle[i].push_back(pascalsTriangle[i-1][j-1]+pascalsTriangle[i-1][j]);
                }
            }
        }

        return pascalsTriangle[rowIndex];
    }
};
