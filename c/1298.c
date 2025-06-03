bool* p;
bool* v;

int traverse(int* s, int* c, int** k, int* x, int** b, int* y, int j) {
    if (s[j] == 0) {
        p[j] = true;
        return 0;
    }
    if (v[j])
        return 0;
    v[j] = true;
    int r = c[j];
    for (int m = 0; m < x[j]; m++) {
        s[k[j][m]] = 1;
        if (p[k[j][m]])
            r += traverse(s, c, k, x, b, y, k[j][m]);
    }
    for (int m = 0; m < y[j]; m++)
        r += traverse(s, c, k, x, b, y, b[j][m]);
    return r;
}

int maxCandies(int* s, int n, int* c, int candiesSize, int** k, int keysSize,
               int* x, int** b, int containedBoxesSize, int* y, int* i, int m) {
    p = (bool*)malloc(sizeof(bool) * n);
    v = (bool*)malloc(sizeof(bool) * n);
    for (int j = 0; j < n; j++) {
        p[j] = false;
        v[j] = false;
    }
    int r = 0;
    for (int j = 0; j < m; j++)
        r += traverse(s, c, k, x, b, y, i[j]);
    return r;
}
