int possibleStringCount(char* w) {
    int n = strlen(w), c = n;
    for (int i = 1; i < n; i++)
        if (w[i] != w[i - 1])
            c--;
    return c;
}
