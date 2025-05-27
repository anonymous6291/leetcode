int differenceOfSums(int n, int m) {
    int q = n / m;
    return (((n + 1) * n) / 2) - (1 + q) * m * q;
}
