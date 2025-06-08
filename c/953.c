bool isAlienSorted(char** w, int n, char* o) {
    int c[26];
    for (int i = 0; i < 26; i++)
        c[o[i] - 97] = i;
    char* s1 = w[0];
    int n1 = strlen(s1);
    for (int i = 1; i < n; i++) {
        char* s2 = w[i];
        int n2 = strlen(s2), j = 0;
        while (j < n1 && j < n2 && s1[j] == s2[j])
            j++;
        if (j != n1 && j == n2)
            return false;
        while (j < n1)
            if (j == n2 || c[s1[j] - 97] > c[s2[j] - 97])
                return false;
            else if (s1[j] != s2[j++])
                break;
        n1 = n2;
        s1 = s2;
    }
    return true;
}
