class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t i = 0, res = 0;
        while (i <= 31) {
            res = (res << 1) | (n & 1);
            n >>= 1;
            ++i;
        }
        return res;
    }
};
