int titleToNumber(char* c) {
    int s = 0, n = strlen(c);
    long long m = 1;
    for (int i = n - 1; i >= 0; i--, m *= 26)
        s += m * (c[i] - 64);
    return s;
}
