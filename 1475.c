int* finalPrices(int* p, int n, int* rs) {
    *rs = n;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (p[j] <= p[i]) {
                p[i] -= p[j];
                break;
            }
    return p;
}
