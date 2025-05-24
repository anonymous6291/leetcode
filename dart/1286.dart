class CombinationIterator {

    String c = "";
    int n = 0, l = 0;
    List<int> p = [];

    CombinationIterator(String c, int l) {
        this.c = c;
        n = c.length;
        this.l = l;
        p = [];
        for (int i = 0; i < l; i++)
            p.add(i);
    }
  
    String next() {
        String w = "";
        for (int i = 0; i < l; i++)
            w += c[p[i]];
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
  
    bool hasNext() {
        return p[0] <= n - l;
    }
}

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator obj = CombinationIterator(characters, combinationLength);
 * String param1 = obj.next();
 * bool param2 = obj.hasNext();
 */
