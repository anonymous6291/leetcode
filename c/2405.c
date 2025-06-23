int partitionString(char* t) {
    int n = strlen(t), c = 1, f = 0;
    for (int i = 0; i < n; i++) {
        if (f & (1 << (t[i] - 97))) {
            f = 0;
            c++;
        }
        f |= 1 << (t[i] - 97);
    }
    return c;
}
