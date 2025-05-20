class Solution {
    public boolean isZeroArray(int[] n, int[][] q) {
        int l = n.length;
        int r[] = new int[l + 1];
        for (int i[] : q) {
            r[i[0]]++;
            r[i[1] + 1]--;
        }
        int p = 0;
        for (int i = 0; i < l; i++) {
            p += r[i];
            if (n[i] > p)
                return false;
        }
        return true;
    }
}
