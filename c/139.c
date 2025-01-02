struct trie {
    struct trie** c;
    bool w;
};
struct trie* ntrie() {
    struct trie* t = (struct trie*)malloc(sizeof(struct trie));
    t->c = (struct trie**)malloc(sizeof(struct trie*) * 26);
    for (int i = 0; i < 26; i++)
        t->c[i] = NULL;
    t->w = false;
    return t;
}
void make(struct trie* r, char** wd, int n) {
    for (int i = 0; i < n; i++) {
        struct trie* t = r;
        int tn = strlen(wd[i]);
        for (int j = 0; j < tn; j++) {
            if (t->c[wd[i][j] - 'a'] == NULL)
                t->c[wd[i][j] - 'a'] = ntrie();
            t = t->c[wd[i][j] - 'a'];
        }
        t->w = true;
    }
}
bool canMake(struct trie* r, char* s, int i, int n, bool* trav) {
    if (i == n)
        return true;
    if (trav[i])
        return false;
    trav[i] = true;
    struct trie* t = r;
    while (i < n) {
        t = t->c[s[i] - 'a'];
        if (t == NULL)
            return false;
        if (t->w && canMake(r, s, i + 1, n, trav))
            return true;
        ++i;
    }
    return false;
}
bool wordBreak(char* s, char** wdt, int ws) {
    struct trie* root = ntrie();
    make(root, wdt, ws);
    int n = strlen(s);
    bool* trav = (bool*)malloc(sizeof(bool) * n);
    for (int i = 0; i < n; i++)
        trav[i] = false;
    return canMake(root, s, 0, n, trav);
}
