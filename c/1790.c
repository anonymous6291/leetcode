bool areAlmostEqual(char* s1, char* s2) {
    int s = 0, n = strlen(s1);
    while (s < n && s1[s] == s2[s])
        ++s;
    if (s == n)
        return true;
    int e = n - 1;
    while (s1[e] == s2[e])
        --e;
    if (s1[s] != s2[e] || s1[e] != s2[s])
        return false;
    ++s;
    while (s < e) {
        if (s1[s] != s2[s])
            return false;
        ++s;
    }
    return true;
}
