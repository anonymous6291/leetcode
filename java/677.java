class MapSum {
    class Trie {
        Trie c[];
        int val;

        Trie() {
            c = new Trie[26];
            val = 0;
        }
    }

    Trie root;

    public MapSum() {
        root = new Trie();
    }

    public void insert(String key, int val) {
        Trie t = root;
        for (int c : key.toCharArray()) {
            if (t.c[c - 97] == null)
                t.c[c - 97] = new Trie();
            t = t.c[c - 97];
        }
        t.val = val;
    }

    public int sum(String prefix) {
        Trie t = root;
        for (int c : prefix.toCharArray()) {
            if (t == null)
                return 0;
            t = t.c[c - 97];
        }
        return find(t);
    }

    private int find(Trie r) {
        if (r == null)
            return 0;
        int sum = r.val;
        for (Trie t : r.c)
            sum += find(t);
        return sum;
    }
}

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum obj = new MapSum();
 * obj.insert(key,val);
 * int param_2 = obj.sum(prefix);
 */
