class CombinationIterator {
public:
    string c;
    int n, l, *p;

public:
    CombinationIterator(string c, int l) {
        this->c = c;
        n = c.length();
        this->l = l;
        p = (int*)malloc(sizeof(int) * l);
        for (int i = 0; i < l; i++)
            p[i] = i;
    }

    string next() {
        string w;
        for (int i = 0; i < l; i++)
            w.push_back(c[p[i]]);
        int i = l - 1;
        while (i > 0 && p[i] == n - (l - i))
            --i;
        p[i++]++;
        while (i < l) {
            p[i] = p[i - 1] + 1;
            i++;
        }
        return w;
    }

    bool hasNext() { return p[0] <= n - l; }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters,
 * combinationLength); string param_1 = obj->next(); bool param_2 =
 * obj->hasNext();
 */
