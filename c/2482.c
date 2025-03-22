/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
int** onesMinusZeros(int** grid, int m, int* gcs, int* rsm, int** rcs) {
    int n = gcs[0];
    *rsm = m;
    *rcs = gcs;
    int* rs = (int*)malloc(sizeof(int) * m);
    int* cs = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < m; i++)
        rs[i] = 0;
    for (int i = 0; i < n; i++)
        cs[i] = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            rs[i] += grid[i][j];
            cs[j] += grid[i][j];
        }
    }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            grid[i][j] = rs[i] * 2 - m + cs[j] * 2 - n;
    return grid;
}
