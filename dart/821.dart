class Solution {
    int abs(int i) {
        return (i < 0) ? -i : i;
    }

    List<int> shortestToChar(String w, String c) {
        int n = w.length;
        List<int> r = [];
        List<int> p = [];
        int i = 0, k = 0;
        for (int j = 0; j < n; j++)
            if (w[j] == c)
                p.add(j);
        for (int j = 0; j < n; j++) {
            if (k + 1 < p.length && abs(p[k] - j) > abs(p[k + 1] - j))
                k++;
            r.add(abs(p[k] - j));
        }
        return r;
    }
}
