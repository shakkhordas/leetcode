class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int fCount = 0;

        for (int i=0; i<flowerbed.size(); i++) {
            if (flowerbed[i] == 0) {
                bool isLeftPlotEmpty = (i == 0) || (flowerbed[i-1] == 0);
                bool isRightPlotEmpty = (i == flowerbed.size()-1) || (flowerbed[i+1] == 0);

                if (isLeftPlotEmpty && isRightPlotEmpty) {
                    flowerbed[i] = 1;
                    fCount++;
                }
            }
        }

        return fCount >= n;

    }
};
