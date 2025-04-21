class Solution {
    int numberOfArrays(List<int> d, int l, int u) {
        int n = d.length;
        int c = l, s = l, e = l;
        for (int i = 0; i < n; i++) {
            c += d[i];
            if (s > c)
                s = c;
            if (e < c)
                e = c;
        }
        return max(0, s - l + u - e + 1);
    }
}
