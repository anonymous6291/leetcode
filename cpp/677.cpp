struct Trie {
    struct Trie** c;
    int val;
};

typedef struct Trie Trie;

class MapSum {
public:
    Trie* root;

    Trie* make() {
        Trie* t = (Trie*)malloc(sizeof(Trie));
        t->c = (Trie**)malloc(sizeof(Trie*) * 26);
        for (int i = 0; i < 26; i++)
            t->c[i] = 0;
        t->val = 0;
        return t;
    }

    int find(Trie* r) {
        if (!r)
            return 0;
        int sum = r->val;
        for (int i = 0; i < 26; i++)
            sum += find(r->c[i]);
        return sum;
    }

    MapSum() { root = make(); }

    void insert(string key, int val) {
        Trie* t = root;
        for (int i : key) {
            if (t->c[i - 97] == NULL)
                t->c[i - 97] = make();
            t = t->c[i - 97];
        }
        t->val = val;
    }

    int sum(string prefix) {
        Trie* t = root;
        for (int i : prefix) {
            if (!t)
                return 0;
            t = t->c[i - 97];
        }
        return find(t);
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
