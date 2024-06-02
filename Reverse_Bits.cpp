class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res = 0;
        for (int i=1; i<=32; i++) {
            res = res << 1;
            int bit = n&1;
            res |= bit;
            n = n >> 1;
        }
        return res;
    }
};
