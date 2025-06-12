int maxAdjacentDistance(int* n, int l) {
    int m = fabs(n[0] - n[l - 1]);
    for (int i = 1; i < l; i++)
        m = fmax(m, fabs(n[i] - n[i - 1]));
    return m;
}
