char g(int c) {
    if (c == 0)
        return 'Z';
    return (char)('A' + c - 1);
}

char* convertToTitle(int c) {
    int n = 1, t = c;
    while (t > 0) {
        n++;
        t = (t - 1) / 26;
    }
    char* r = (char*)malloc(sizeof(char) * n--);
    r[n--] = 0;
    while (c > 0) {
        r[n--] = g(c % 26);
        c = (c - 1) / 26;
    }
    return r;
}
