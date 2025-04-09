int minOperations(int* n, int l, int k) {
    bool f[101] = {false};
    int c = 0;
    for (int i = 0; i < l; i++) {
        if (n[i] < k)
            return -1;
        f[n[i]] = true;
    }
    for (int i = k + 1; i < 101; i++)
        if (f[i])
            c++;
    return c;
}
