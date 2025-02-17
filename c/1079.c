void sort(char* a, int n) {
    for (int i = 0; i < n - 1; i++) {
        int t = i;
        for (int j = i + 1; j < n; j++)
            if (a[t] > a[j])
                t = j;
        char s = a[i];
        a[i] = a[t];
        a[t] = s;
    }
}

int count(char* c, bool* trav, int n) {
    int cc = 0;
    for (int i = 0; i < n; i++)
        if (!trav[i]) {
            trav[i] = true;
            cc += count(c, trav, n) + 1;
            trav[i] = false;
            int t = i;
            while (i < n && c[t] == c[i])
                ++i;
            --i;
        }
    return cc;
}

int numTilePossibilities(char* tiles) {
    int n = strlen(tiles);
    sort(tiles, n);
    bool trav[8] = {false};
    return count(tiles, trav, n);
}
