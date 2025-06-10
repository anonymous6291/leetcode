/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
#define max(x, y) ((x > y) ? x : y)
#define min(x, y) ((x < y) ? x : y)

int** merge(int** j, int n, int* u, int* o, int** t) {
    int k = 10001, m = 0, c = 0, p = 0, x = -1;
    for (int i = 0; i < n; i++) {
        k = min(k, min(j[i][0], j[i][1]));
        m = max(m, max(j[i][0], j[i][1]));
    }
    m -= k - 1;
    int *s = (int*)malloc(sizeof(int) * m), *e = (int*)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++) {
        s[i] = 0;
        e[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        s[j[i][0] - k]++;
        e[j[i][1] - k]++;
    }
    for (int i = 0; i < m; i++) {
        p += s[i];
        if (p > 0 && x == -1)
            x = i;
        p -= e[i];
        if (p == 0 && x != -1) {
            c++;
            x = -1;
        }
    }
    int** r = (int**)malloc(sizeof(int*) * c);
    *o = c;
    int* g = (int*)malloc(sizeof(int) * c);
    for (int i = 0; i < c; i++) {
        r[i] = (int*)malloc(sizeof(int) * 2);
        g[i] = 2;
    }
    *t = g;
    p = 0;
    c = 0;
    for (int i = 0; i < m; i++) {
        p += s[i];
        if (p > 0 && x == -1)
            x = i;
        p -= e[i];
        if (p == 0 && x != -1) {
            r[c][0] = x + k;
            r[c++][1] = i + k;
            x = -1;
        }
    }
    return r;
}
