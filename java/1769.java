class Solution {
    public int[] minOperations(String boxes) {
        char b[] = boxes.toCharArray();
        int n = b.length;
        int res[] = new int[n];
        int ps = 0, ss = 0, pbc = 0, sbc = 0;
        for (int i = n - 1; i >= 0; i--) {
            ss += sbc;
            if (b[i] == '1')
                ++sbc;
        }
        for (int i = 0; i < n; i++) {
            res[i] = ss + ps;
            if (b[i] == '1') {
                --sbc;
                ++pbc;
            }
            ss -= sbc;
            ps += pbc;
        }
        return res;
    }
}
