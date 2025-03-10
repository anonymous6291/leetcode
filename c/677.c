struct Trie {
    struct Trie** c;
    int val;
};

typedef struct Trie Trie;

typedef struct {
    Trie* root;
} MapSum;

Trie* make() {
    Trie* t = (Trie*)malloc(sizeof(Trie));
    t->c = (Trie**)malloc(sizeof(Trie*) * 26);
    for (int i = 0; i < 26; i++)
        t->c[i] = 0;
    t->val = 0;
    return t;
}

MapSum* mapSumCreate() {
    MapSum* ms = (MapSum*)malloc(sizeof(MapSum));
    ms->root = make();
    return ms;
}

void mapSumInsert(MapSum* obj, char* key, int val) {
    Trie* t = obj->root;
    while (*key) {
        if (!t->c[*key - 97])
            t->c[*key - 97] = make();
        t = t->c[*key - 97];
        key++;
    }
    t->val = val;
}

int find(Trie* r) {
    if (!r)
        return 0;
    int sum = r->val;
    for (int i = 0; i < 26; i++)
        sum += find(r->c[i]);
    return sum;
}

int mapSumSum(MapSum* obj, char* prefix) {
    Trie* t = obj->root;
    while (*prefix) {
        if (!t)
            return 0;
        t = t->c[*prefix - 97];
        prefix++;
    }
    return find(t);
}

void mapSumFree(MapSum* obj) { free(obj); }

/**
 * Your MapSum struct will be instantiated and called as such:
 * MapSum* obj = mapSumCreate();
 * mapSumInsert(obj, key, val);

 * int param_2 = mapSumSum(obj, prefix);

 * mapSumFree(obj);
*/
