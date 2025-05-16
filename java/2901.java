class Solution {
    private boolean validHam(char i[], char j[]) {
        if (i.length != j.length)
            return false;
        int n = i.length;
        boolean f = false;
        for (int k = 0; k < n; k++)
            if (i[k] != j[k]) {
                if (f)
                    return false;
                f = true;
            }
        return true;
    }

    private void find(char a[][], int g[], int i, int n, List<String> l[]) {
        if (i == n)
            return;
        List<String> t = new ArrayList<>();
        l[i] = t;
        t.add(new String(a[i]));
        find(a, g, i + 1, n, l);
        List<String> p = null;
        for (int k = i + 1; k < n; k++)
            if (g[i] != g[k] && validHam(a[i], a[k]) && (p == null || p.size() < l[k].size()))
                p = l[k];
        if (p != null)
            t.addAll(p);
    }

    public List<String> getWordsInLongestSubsequence(String[] w, int[] g) {
        int n = w.length;
        char a[][] = new char[n][];
        for (int i = 0; i < n; i++)
            a[i] = w[i].toCharArray();
        List<String> d[] = new List[n];
        find(a, g, 0, n, d);
        List<String> t = d[0];
        for (List<String> k : d)
            if (t.size() < k.size())
                t = k;
        return t;
    }
}
