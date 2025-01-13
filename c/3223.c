int minimumLength(char* s) {
    int f[26] = {0};
    int n = strlen(s), count = 0;
    for (int i = 0; i < n; i++)
        ++f[s[i] - 97];
    for (int i = 0; i < 26; i++) {
        if (f[i] == 0)
            continue;
        count += (f[i] % 2 == 0) ? 2 : 1;
    }
    return count;
}
