#define MAX(a, b) ((a > b) ? a : b)

int numberOfArrays(int* d, int n, int l, int u) {
    long long c = l, s = l, e = l;
    for (int i = 0; i < n; i++) {
        c += d[i];
        if (s > c)
            s = c;
        if (e < c)
            e = c;
    }
    return (int)MAX(0, s - l + u - e + 1);
}
