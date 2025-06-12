bool permutation(int* x, int* y) {
    for (int i = 0; i < 26; i++)
        if (x[i] != y[i])
            return false;
    return true;
}

bool checkInclusion(char* x, char* y) {
    int l = strlen(x), m = strlen(y);
    if (l > m)
        return false;
    int i[26] = {0};
    int j[26] = {0};
    for (int k = 0; k < l; k++) {
        i[x[k] - 97]++;
        j[y[k] - 97]++;
    }
    if (permutation(i, j))
        return true;
    for (int k = l; k < m; k++) {
        j[y[k - l] - 97]--;
        j[y[k] - 97]++;
        if (permutation(i, j))
            return true;
    }
    return false;
}
