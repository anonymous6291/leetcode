class Solution {
    public int[] findMissingAndRepeatedValues(int[][] g) {
        int n = g.length, rep = -1;
        boolean f[] = new boolean[n * n + 1];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (f[g[i][j]])
                    rep = g[i][j];
                else
                    f[g[i][j]] = true;
        for (int i = n * n; i >= 0; i--)
            if (!f[i])
                return new int[] { rep, i };
        return null;
    }
}
