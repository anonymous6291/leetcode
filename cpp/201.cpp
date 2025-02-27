class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        int res = 0;
        long int m = 1;
        while (l > 0 || r > 0) {
            if ((l & 1) != (r & 1))
                res = 0;
            else if ((l & 1) == 1)
                res |= m;
            l >>= 1;
            r >>= 1;
            m <<= 1;
        }
        return res;
    }
};
