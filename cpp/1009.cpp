class Solution {
public:
    int bitwiseComplement(int n) {
        int res = 0, l = 1;
        do {
            if ((n & 1) == 0)
                res |= l;
            n >>= 1;
            l <<= 1;
        } while (n > 0);
        return res;
    }
};
