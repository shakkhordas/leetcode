class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int ROWS = img.size(), COLS = img[0].size();

        for (int r=0; r<ROWS; r++) {
            for (int c=0; c<COLS; c++) {

                int sum = 0, cnt = 0;

                for (int i = r - 1; i <= r + 1; i++) {
                    for (int j = c - 1; j <= c + 1; j++) {
                        if (i < 0 || i == ROWS || j < 0 || j == COLS)
                            continue;
                        sum += img[i][j] % 256;
                        cnt++;

                    }
                }

                img[r][c] = img[r][c] ^ ((sum / cnt) << 8);

            }
        }

        for (int r=0; r<ROWS; r++) {
            for (int c=0; c<COLS; c++) {
                img[r][c] = img[r][c] >> 8;
            }
        }

        return img;
    }
};
