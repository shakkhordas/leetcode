class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        int rows = grid.size() , cols = grid[0].size();

        for (int i=0; i<rows; i++) {
            for (int j=0; j<cols; j++) {
                if (grid[i][j]) {
                    ans += 4;
                    if (i>0 and grid[i-1][j]) ans -= 1;
                    if (i<rows-1 and grid[i+1][j]) ans -= 1;
                    if (j>0 and grid[i][j-1]) ans -= 1;
                    if (j<cols-1 and grid[i][j+1]) ans -= 1;
                }
            }
        }

        return ans;
    }
};
