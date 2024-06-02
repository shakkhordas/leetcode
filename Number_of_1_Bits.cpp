class Solution {
public:
    int hammingWeight(int n) {
        int setCount = 0;
        while (n) {
            int bit = n&1;
            if (bit)
                setCount++;
            n = n>>1;
        }
        return setCount;

    }
};
