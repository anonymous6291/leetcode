bool isZeroArray(int* n, int l, int** q, int x, int* y) {
    int* r = (int*)malloc(sizeof(int) * (l + 1));
    for (int i = 0; i < l; i++)
        r[i] = 0;
    for (int i = 0; i < x; i++) {
        r[q[i][0]]++;
        r[q[i][1] + 1]--;
    }
    int p = 0;
    for (int i = 0; i < l; i++) {
        p += r[i];
        if (n[i] > p)
            return false;
    }
    return true;
}
