int minFlips(int** grid, int m, int* gcs) {
    int n = gcs[0], rc = 0, cc = 0;
    for (int i = 0; i < m; i++) {
        int s = 0, e = n - 1;
        while (s < e)
            rc += grid[i][s++] ^ grid[i][e--];
    }
    for (int i = 0; i < n; i++) {
        int s = 0, e = m - 1;
        while (s < e)
            cc += grid[s++][i] ^ grid[e--][i];
    }
    if (rc < cc)
        return rc;
    return cc;
}
