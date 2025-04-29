long long countSubarrays(int* n, int l, int k) {
    int m = n[0], p = 0, c = 0;
    long long t = 0;
    for (int i = 0; i < l; i++)
        if (n[i] > m)
            m = n[i];
    for (int i = 0; i < l; i++) {
        if (m == n[i])
            c++;
        if (c == k) {
            long long x = p;
            while (c == k)
                if (m == n[p++])
                    c--;
            t += (p - x) * (l - i);
        }
    }
    return t;
}
