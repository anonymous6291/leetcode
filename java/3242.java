class NeighborSum {
    int[][] g, p;
    int n;

    public NeighborSum(int[][] g) {
        this.g = g;
        n = g.length;
        p = new int[n * n][2];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) {
                p[g[i][j]][0] = i;
                p[g[i][j]][1] = j;
            }
    }

    public int adjacentSum(int v) {
        int i = p[v][0], j = p[v][1], r = 0;
        if (i - 1 >= 0)
            r += g[i - 1][j];
        if (i + 1 < n)
            r += g[i + 1][j];
        if (j - 1 >= 0)
            r += g[i][j - 1];
        if (j + 1 < n)
            r += g[i][j + 1];
        return r;
    }

    public int diagonalSum(int v) {
        int i = p[v][0], j = p[v][1], r = 0;
        if (i - 1 >= 0) {
            if (j - 1 >= 0)
                r += g[i - 1][j - 1];
            if (j + 1 < n)
                r += g[i - 1][j + 1];
        }
        if (i + 1 < n) {
            if (j - 1 >= 0)
                r += g[i + 1][j - 1];
            if (j + 1 < n)
                r += g[i + 1][j + 1];
        }
        return r;
    }
}

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum obj = new NeighborSum(grid);
 * int param_1 = obj.adjacentSum(value);
 * int param_2 = obj.diagonalSum(value);
 */
