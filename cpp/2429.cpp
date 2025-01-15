class Solution {
private:
    int count1(int n) {
        int o = 0;
        while (n > 0) {
            o += n & 1;
            n >>= 1;
        }
        return o;
    }

public:
    int minimizeXor(int n1, int n2) {
        int t = count1(n2) - count1(n1), c = 1;
        while (t != 0) {
            if ((n1 & c) == c && t < 0) {
                n1 ^= c;
                ++t;
            } else if ((n1 & c) != c && t > 0) {
                n1 |= c;
                --t;
            }
            c <<= 1;
        }
        return n1;
    }
};
