typedef struct {
    char* c;
    int n, l, *p;
} CombinationIterator;

CombinationIterator* combinationIteratorCreate(char* c, int l) {
    CombinationIterator* m =
        (CombinationIterator*)malloc(sizeof(CombinationIterator));
    m->c = c;
    m->n = strlen(c);
    m->l = l;
    m->p = (int*)malloc(sizeof(int) * l);
    for (int i = 0; i < l; i++)
        m->p[i] = i;
    return m;
}

char* combinationIteratorNext(CombinationIterator* m) {
    char* w = (char*)malloc(sizeof(char) * (m->l + 1));
    w[m->l] = 0;
    for (int i = 0; i < m->l; i++)
        w[i] = m->c[m->p[i]];
    int i = m->l - 1;
    while (i > 0 && m->p[i] == m->n - (m->l - i))
        --i;
    m->p[i++]++;
    while (i < m->l) {
        m->p[i] = m->p[i - 1] + 1;
        i++;
    }
    return w;
}

bool combinationIteratorHasNext(CombinationIterator* m) {
    return m->p[0] <= m->n - m->l;
}

void combinationIteratorFree(CombinationIterator* m) { free(m); }

/**
 * Your CombinationIterator struct will be instantiated and called as such:
 * CombinationIterator* obj = combinationIteratorCreate(characters,
 combinationLength);
 * char* param_1 = combinationIteratorNext(obj);

 * bool param_2 = combinationIteratorHasNext(obj);

 * combinationIteratorFree(obj);
*/
