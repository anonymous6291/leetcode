int minMaxDifference(int n) {
    int t = n, l = 0;
    while (t > 0) {
        l++;
        t /= 10;
    }
    int* d = (int*)malloc(sizeof(int) * l);
    t = n;
    int s = 0, e = 0, y = -1;
    for (int i = l - 1; i >= 0; i--, t /= 10) {
        d[i] = t % 10;
        if (d[i] != 9)
            y = d[i];
    }
    int x = d[0];
    for (int i = 0; i < l; i++) {
        if (x == d[i])
            s *= 10;
        else
            s = s * 10 + d[i];
        if (y == d[i])
            e = e * 10 + 9;
        else
            e = e * 10 + d[i];
    }
    return e - s;
}
