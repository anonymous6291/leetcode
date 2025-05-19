class Solution {
    private int len(int i) {
        if (i == 0)
            return 1;
        if (i < 0)
            return len(-i) + 1;
        int l = 0;
        while (i > 0) {
            l++;
            i /= 10;
        }
        return l;
    }

    public int[] findColumnWidth(int[][] g) {
        int m = g.length, n = g[0].length;
        int r[] = new int[n];
        for (int i = 0; i < n; i++) {
            int t = 0;
            for (int j = 0; j < m; j++)
                t = Math.max(t, len(g[j][i]));
            r[i] = t;
        }
        return r;
    }
}
