long long maximumSubarraySum(int* n, int l, int k) {
    long long p = 0, m = 0;
    bool f[100001] = {false};
    int s = 0;
    for (int i = 0; i < l; i++) {
        while (f[n[i]]) {
            f[n[s]] = false;
            p -= n[s++];
        }
        f[n[i]] = true;
        p += n[i];
        if (i - s + 1 == k) {
            m = fmax(m, p);
            f[n[s]] = false;
            p -= n[s++];
        }
    }
    if (l - s == k)
        return fmax(p, m);
    return m;
}
