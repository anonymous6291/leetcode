/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool isSub(char* c1, char* c2) {
    int n1 = strlen(c1), n2 = strlen(c2) - n1 + 1;
    if (n2 <= 0)
        return false;
    for (int i = 0; i < n2; i++) {
        int j = 0;
        while (j < n1 && c1[j] == c2[i + j])
            ++j;
        if (j == n1)
            return true;
    }
    return false;
}

char** stringMatching(char** w, int n, int* rs) {
    char** res = (char**)malloc(sizeof(char*) * n);
    int c = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i != j && isSub(w[i], w[j])) {
                res[c++] = w[i];
                break;
            }
    *rs = c;
    return res;
}
