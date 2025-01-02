class Solution {
    class Trie {
        Trie c[];
        boolean w;

        Trie() {
            c = new Trie[26];
            w = false;
        }
    }

    public boolean wordBreak(String s, List<String> wd) {
        Trie root = new Trie();
        make(wd, root);
        boolean v[] = new boolean[s.length()];
        return canMake(root, s.toCharArray(), 0, s.length(), v);
    }

    private void make(List<String> dict, Trie root) {
        for (String s : dict) {
            Trie t = root;
            for (char c : s.toCharArray()) {
                if (t.c[c - 'a'] == null)
                    t.c[c - 'a'] = new Trie();
                t = t.c[c - 'a'];
            }
            t.w = true;
        }
    }

    private boolean canMake(Trie r, char c[], int s, int n, boolean v[]) {
        if (s == n)
            return true;
        if (v[s])
            return false;
        v[s] = true;
        Trie t = r;
        while (s < n) {
            t = t.c[c[s] - 'a'];
            if (t == null)
                return false;
            if (t.w && canMake(r, c, s + 1, n, v))
                return true;
            ++s;
        }
        return t.w;
    }
}
