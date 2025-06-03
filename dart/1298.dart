class Solution {
    int traverse(List<int> s, List<int> c, List<List<int>> k, List<List<int>> b, int j, List<bool> p, List<bool> v) {
        if (s[j] == 0) {
            p[j] = true;
            return 0;
        }
        if (v[j])
            return 0;
        v[j] = true;
        int r = c[j];
        for (int m in k[j]) {
            s[m] = 1;
            if (p[m])
                r += traverse(s, c, k, b, m, p, v);
        }
        for (int m in b[j])
            r += traverse(s, c, k, b, m, p, v);
        return r;
    }

    int maxCandies(List<int> s, List<int> c, List<List<int>> k, List<List<int>> b, List<int> i) {
        int n = s.length;
        List<bool> p = [];
        List<bool> v = [];
        for (int j = 0; j < n; j++) {
            p.add(false);
            v.add(false);
        }
        int r = 0;
        for (int j in i)
            r += traverse(s, c, k, b, j, p, v);
        return r;
    }
}
