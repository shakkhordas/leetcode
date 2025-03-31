class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int cols = rows > 0 ? mat[0].size() : 0;

        if (r*c != rows*cols) return mat;

        vector<int> elems;
        int k = 0;

        for (int i=0; i<mat.size(); i++) {
            for (int j=0; j<mat[i].size(); j++)
                elems.push_back(mat[i][j]);
        }

        vector<vector<int>> ans(r, vector<int>(c, 0));

        for (int i=0; i<r; i++) {
            for (int j=0; j<c; j++) {
                ans[i][j] = elems[k];
                k++;
            }
        }

        return ans;

    }
};
