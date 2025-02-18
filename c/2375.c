bool find(char* res, char* p, bool* trav, int s, int i, int n) {
    res[i] = (char)(s + '0');
    if (i == n)
        return true;
    while (true) {
        s = s + ((p[i] == 'I') ? 1 : -1);
        if (s < 1 || s > 9)
            return false;
        if (!trav[s]) {
            trav[s] = true;
            if (find(res, p, trav, s, i + 1, n))
                return true;
            trav[s] = false;
        }
    }
}

char* smallestNumber(char* p) {
    int n = strlen(p);
    char* res = (char*)malloc(sizeof(char) * (n + 2));
    res[n + 1] = '\0';
    bool trav[10] = {false};
    for (int i = 1; i <= 9; i++) {
        trav[i] = true;
        if (find(res, p, trav, i, 0, n))
            return res;
        trav[i] = false;
    }
    return p;
}
