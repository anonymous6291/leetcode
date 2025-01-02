class Solution {
    struct trie {
        struct trie** c;
        bool w;
    };

private:
    struct trie* ntrie() {
        struct trie* t = (struct trie*)malloc(sizeof(struct trie));
        t->c = (struct trie**)malloc(sizeof(struct trie*) * 26);
        for (int i = 0; i < 26; i++)
            t->c[i] = NULL;
        t->w = false;
        return t;
    }

private:
    void make(struct trie* r, vector<string>& wd, int n) {
        for (int i = 0; i < n; i++) {
            struct trie* t = r;
            int tn = wd[i].length();
            for (int j = 0; j < tn; j++) {
                if (t->c[wd[i].at(j) - 'a'] == NULL)
                    t->c[wd[i].at(j) - 'a'] = ntrie();
                t = t->c[wd[i].at(j) - 'a'];
            }
            t->w = true;
        }
    }

private:
    bool canMake(struct trie* r, string s, int i, int n, vector<bool>& trav) {
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

public:
    bool wordBreak(string s, vector<string>& wdt) {
        struct trie* root = ntrie();
        make(root, wdt, wdt.size());
        vector<bool> trav(s.length(), false);
        return canMake(root, s, 0, s.length(), trav);
    }
};
