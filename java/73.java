class Solution {
    public void setZeroes(int[][] g) {
        int m = g.length, n = g[0].length;
        boolean r[] = new boolean[m], c[] = new boolean[n];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (g[i][j] == 0) {
                    r[i] = true;
                    c[j] = true;
                }
        for (int i = 0; i < m; i++)
            if (r[i])
                for (int j = 0; j < n; j++)
                    g[i][j] = 0;
        for (int i = 0; i < n; i++)
            if (c[i])
                for (int j = 0; j < m; j++)
                    g[j][i] = 0;
    }
}
