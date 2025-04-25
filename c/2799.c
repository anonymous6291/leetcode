int countCompleteSubarrays(int* n, int l) {
    int d = 0, c = 0, t = 0, p = 0;
    bool f[2001] = {false};
    int o[2001] = {0};
    for (int i = 0; i < l; i++)
        if (!f[n[i]]) {
            d++;
            f[n[i]] = true;
        }
    for (int i = 0; i < l; i++) {
        if (!o[n[i]])
            c++;
        o[n[i]]++;
        int u = p;
        while (c >= d) {
            o[n[p]]--;
            if (!o[n[p]])
                c--;
            p++;
            if (c < d) {
                t += (p - u) * (l - i);
                break;
            }
        }
    }
    return t;
}
