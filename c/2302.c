long long countSubarrays(int* n, int l, long long k) {
    long long c = 0, s = 0;
    int p = -1;
    for (int i = 0; i < l; i++) {
        s += n[i];
        while ((s * (i - p)) >= k)
            s -= n[++p];
        c += i - p;
    }
    return c;
}
