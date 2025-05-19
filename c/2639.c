/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#define max(a, b) ((a > b) ? a : b)

int len(int i) {
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

int* findColumnWidth(int** g, int m, int* x, int* y) {
    int n = x[0];
    *y = n;
    int* r = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        int t = 0;
        for (int j = 0; j < m; j++)
            t = max(t, len(g[j][i]));
        r[i] = t;
    }
    return r;
}
