class CombinationIterator {
    char c[];
    int n, l, p[];

    public CombinationIterator(String c, int l) {
        this.c = c.toCharArray();
        n = c.length();
        this.l = l;
        p = new int[l];
        for (int i = 0; i < l; i++)
            p[i] = i;
    }

    public String next() {
        char w[] = new char[l];
        for (int i = 0; i < l; i++)
            w[i] = c[p[i]];
        int i = l - 1;
        while (i > 0 && p[i] == n - (l - i))
            --i;
        p[i++]++;
        while (i < l) {
            p[i] = p[i - 1] + 1;
            i++;
        }
        return new String(w);
    }

    public boolean hasNext() {
        return p[0] <= n - l;
    }
}

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator obj = new CombinationIterator(characters, combinationLength);
 * String param_1 = obj.next();
 * boolean param_2 = obj.hasNext();
 */
