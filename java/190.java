public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
        int i = 0, res = 0;
        while (i <= 31) {
            res = (res << 1) | (n & 1);
            n >>= 1;
            ++i;
        }
        return res;
    }
}
