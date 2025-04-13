long long countSubstrings(char* s, char c) {
    long long n = 0;
    for (int l = strlen(s) - 1; l >= 0; l--)
        if (s[l] == c)
            n++;
    return (n * (n + 1)) / 2;
}
