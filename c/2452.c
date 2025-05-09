/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
struct Trie {
    struct Trie* c[26];
};

typedef struct Trie Trie;

Trie* r = NULL;

Trie* new_Trie() {
    Trie* t = (Trie*)malloc(sizeof(Trie));
    for (int i = 0; i < 26; i++)
        t->c[i] = NULL;
    return t;
}

void makeTrie(char* s) {
    Trie* t = r;
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (t->c[s[i] - 97] == NULL)
            t->c[s[i] - 97] = new_Trie();
        t = t->c[s[i] - 97];
    }
}

bool canMake(Trie* t, char* w, int i, int n, int l) {
    if (t->c[w[i] - 97] != NULL &&
        (i == n - 1 || canMake(t->c[w[i] - 97], w, i + 1, n, l)))
        return true;
    if (l == 0)
        return false;
    for (int j = 0; j < 26; j++)
        if (t->c[j] != NULL &&
            (i == n - 1 || canMake(t->c[j], w, i + 1, n, l - 1)))
            return true;
    return false;
}

char** twoEditWords(char** q, int qs, char** d, int ds, int* rs) {
    r = new_Trie();
    for (int i = 0; i < ds; i++)
        makeTrie(d[i]);
    int c = 0;
    for (int i = 0; i < qs; i++)
        if (canMake(r, q[i], 0, strlen(q[i]), 2))
            c++;
    *rs = c;
    char** res = (char**)malloc(sizeof(char*) * c);
    int j = 0;
    for (int i = 0; i < qs; i++)
        if (canMake(r, q[i], 0, strlen(q[i]), 2))
            res[j++] = q[i];
    return res;
}
