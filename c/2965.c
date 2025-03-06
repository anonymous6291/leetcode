/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingAndRepeatedValues(int** g, int n, int* gcs, int* rs) {
    *rs = 2;
    int rep = -1, ts = n * n + 1;
    bool* f = (bool*)malloc(sizeof(bool) * ts);
    for (int i = 0; i < ts; i++)
        f[i] = false;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (f[g[i][j]])
                rep = g[i][j];
            else
                f[g[i][j]] = true;
    for (int i = ts - 1; i >= 0; i--)
        if (!f[i]) {
            int* res = (int*)malloc(sizeof(int) * 2);
            res[0] = rep;
            res[1] = i;
            return res;
        }
    return NULL;
}
