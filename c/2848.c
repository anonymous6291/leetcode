int numberOfPoints(int** n, int r, int* o) {
    int c[102] = {0};
    for (int i = 0; i < r; i++) {
        c[n[i][0]] += 1;
        c[n[i][1] + 1] -= 1;
    }
    int p = 0, s = 0;
    for (int i = 0; i < 101; i++) {
        s += c[i];
        if (s != 0)
            p++;
    }
    return p;
}
