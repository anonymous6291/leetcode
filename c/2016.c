int maximumDifference(int* n, int l) {
    int p = n[0], m = -1;
    for (int i = 1; i < l; i++)
        if (p < n[i])
            m = fmax(m, n[i] - p);
        else
            p = n[i];
    return m;
}
