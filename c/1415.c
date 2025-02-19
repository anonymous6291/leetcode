int k;

bool find(char* res, int i, int n) {
    if (i == n) {
        k--;
        return k == 0;
    }
    for (char c = 'a'; c < 'd'; c++)
        if (res[i - 1] != c) {
            res[i] = c;
            if (find(res, i + 1, n))
                return true;
        }
    return false;
}

char* getHappyString(int n, int kk) {
    char* res = (char*)malloc(sizeof(char) * (n + 1));
    res[n] = '\0';
    k = kk;
    for (char c = 'a'; c < 'd'; c++) {
        res[0] = c;
        if (find(res, 1, n))
            return res;
    }
    res[0] = '\0';
    return res;
}
