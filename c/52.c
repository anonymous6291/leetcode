int count(int i, int s, bool* c, bool* r, bool* l) {
    if (i == s)
        return 1;
    int q = 0;
    for (int j = 0; j < s; j++)
        if (!(c[j] || r[i + j] || l[s - i + j])) {
            c[j] = true;
            r[i + j] = true;
            l[s - i + j] = true;
            q += count(i + 1, s, c, r, l);
            c[j] = false;
            r[i + j] = false;
            l[s - i + j] = false;
        }
    return q;
}

int totalNQueens(int n) {
    bool* c = (bool*)malloc(sizeof(bool) * n);
    bool* r = (bool*)malloc(sizeof(bool) * 2 * n);
    bool* l = (bool*)malloc(sizeof(bool) * 2 * n);
    for (int i = 0; i < n; i++)
        c[i] = false;
    for (int i = 2 * n - 1; i > -1; i--) {
        l[i] = false;
        r[i] = false;
    }
    return count(0, n, c, r, l);
}
