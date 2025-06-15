int len(int n) {
    int l = 0;
    while (n > 0) {
        l++;
        n /= 10;
    }
    return l;
}

int ft(int* d, int l, int x, int y) {
    for (int i = 0; i < l; i++)
        if (d[i] != x && d[i] != y)
            return i;
    return -1;
}

int rac(int* d, int l, int o, int n) {
    int v = 0;
    for (int i = 0; i < l; i++)
        v = v * 10 + (d[i] == o ? n : d[i]);
    return v;
}

int maxDiff(int n) {
    int l = len(n);
    int* d = (int*)malloc(sizeof(int) * l);
    for (int i = l - 1, t = n; i >= 0; i--, t /= 10)
        d[i] = t % 10;
    int i = ft(d, l, -1, 9), e = i == -1 ? n : rac(d, l, d[i], 9);
    i = ft(d, l, 0, 1);
    return e - (i == -1 ? n : rac(d, l, d[i], i == 0 ? 1 : 0));
}
