int maxVowels(char* c, int k) {
    int v[26] = {0};
    v[0] = v[4] = v[8] = v[14] = v[20] = 1;
    int vc = 0, n = strlen(c);
    for (int i = 0; i < k; i++)
        vc += v[c[i] - 97];
    int mvc = vc;
    for (int i = k; i < n; i++) {
        vc += v[c[i] - 97] - v[c[i - k] - 97];
        if (vc > mvc)
            mvc = vc;
    }
    return mvc;
}
