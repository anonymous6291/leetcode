class Solution {
    public int[] rowAndMaximumOnes(int[][] m) {
        int ri = -1, oc = -1;
        int r = m.length;
        for (int i = 0; i < r; i++) {
            int c = 0;
            for (int j : m[i])
                c += j;
            if (c > oc) {
                oc = c;
                ri = i;
            }
        }
        return new int[] { ri, oc };
    }
}
