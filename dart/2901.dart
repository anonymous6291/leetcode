class Solution {
    bool validHam(String i, String j) {
        if (i.length != j.length)
            return false;
        int n = i.length;
        bool f = false;
        for (int k = 0; k < n; k++)
            if (i[k] != j[k]) {
                if (f)
                    return false;
                f = true;
            }
        return true;
    }

    void find(List<String> a, List<int> g, int i, int n, List<List<String>> l) {
        if (i == n)
            return;
        List<String> t = l[i];
        t.add(a[i]);
        find(a, g, i + 1, n, l);
        List<String> p = [];
        for (int k = i + 1; k < n; k++)
            if (g[i] != g[k] && validHam(a[i], a[k]) && p.length < l[k].length)
                p = l[k];
        for (String k in p)
            t.add(k);
    }

    List<String> getWordsInLongestSubsequence(List<String> w, List<int> g) {
        int n = w.length;
        List<List<String>> d = [];
        for (int k = 0; k < n; k++)
            d.add([]);
        find(w, g, 0, n, d);
        List<String> t = d[0];
        for (List<String> k in d)
            if (t.length < k.length)
                t = k;
        return t;
    }
}
