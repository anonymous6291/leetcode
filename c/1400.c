bool canConstruct(char* s, int k) {
    int n = strlen(s);
    if (n < k)
        return false;
    int f[26] = {0};
    for (int i = 0; i < n; i++)
        f[s[i] - 'a'] += 1;
    int j = k;
    for (int i = 0; i < 26; i++)
        j -= f[i] % 2;
    return j >= 0;
}
