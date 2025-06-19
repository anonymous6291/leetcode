int partitionArray(int* n, int l, int k) {
    int s = n[0], e = n[0], p = 0, c = 0;
    for (int i = 0; i < l; i++) {
        s = fmin(s, n[i]);
        e = fmax(e, n[i]);
    }
    e = e - s + 1;
    bool* f = (bool*)malloc(sizeof(bool) * e);
    for (int i = 0; i < e; i++)
        f[i] = false;
    for (int i = 0; i < l; i++)
        f[n[i] - s] = true;
    for (int i = 0; i < e; i++)
        if (f[i] && i - p > k) {
            p = i;
            c++;
        }
    return c + 1;
}
