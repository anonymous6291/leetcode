class Solution {
    class Trie {
        Trie c[] = new Trie[26];
    }

    Trie r;

    private void makeTrie(String s) {
        Trie t = r;
        for (int c : s.toCharArray()) {
            if (t.c[c - 97] == null)
                t.c[c - 97] = new Trie();
            t = t.c[c - 97];
        }
    }

    private boolean canMake(Trie t, char w[], int i, int n, int l) {
        if (t.c[w[i] - 97] != null && (i == n - 1 || canMake(t.c[w[i] - 97], w, i + 1, n, l)))
            return true;
        if (l == 0)
            return false;
        for (Trie h : t.c)
            if (h != null && (i == n - 1 || canMake(h, w, i + 1, n, l - 1)))
                return true;
        return false;
    }

    public List<String> twoEditWords(String[] q, String[] d) {
        r = new Trie();
        for (String s : d)
            makeTrie(s);
        List<String> l = new ArrayList<>();
        for (String s : q)
            if (canMake(r, s.toCharArray(), 0, s.length(), 2))
                l.add(s);
        return l;
    }
}
