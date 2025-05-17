int minimumOperations(int* n, int l) {
    bool f[101] = {false};
    int c = 0;
    for (int i = 0; i < l; i++) {
        if (n[i] && !f[n[i]]) {
            f[n[i]] = true;
            c++;
        }
    }
    return c;
}
