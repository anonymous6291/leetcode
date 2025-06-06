char* replaceDigits(char* s) {
    int n = strlen(s);
    char* r = (char*)malloc(sizeof(char) * (n + 1));
    r[n] = '\0';
    for (int i = 0; i < n; i += 2) {
        r[i] = s[i];
        if (i + 1 < n)
            r[i + 1] = (char)(s[i] + s[i + 1] - 48);
    }
    return r;
}
