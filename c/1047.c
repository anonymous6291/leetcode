char* removeDuplicates(char* c) {
    int i = 0, j = 1, n = strlen(c);
    for (; j < n; j++)
        if (i != -1 && c[i] == c[j])
            --i;
        else
            c[++i] = c[j];
    c[i + 1] = '\0';
    return c;
}
