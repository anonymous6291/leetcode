#define min(a, b) ((a < b) ? a : b)
#define max(a, b) ((a > b) ? a : b)

int find(int* t, int* b, int n, int v) {
    int ts = 0, bs = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] == v)
            ts++;
        if (b[i] == v)
            bs++;
        else if (t[i] != v)
            return -1;
    }
    return min(min(ts, bs), n - max(ts, bs));
}

int minDominoRotations(int* t, int l1, int* b, int l2) {
    int r = l1;
    for (int i = 1; i < 7; i++) {
        int v = find(t, b, l1, i);
        if (v != -1)
            r = min(r, v);
    }
    if (r == l1)
        return -1;
    return r;
}
