class Solution {
    List<int> maxScoreIndices(List<int> n) {
        int r = 0, l = 0, q = n.length, m = -1;
        List<int> v = [];
        for (int i in n)
            r += i;
        for (int i = 0; i < q; i++) {
            if (r + l > m) {
                m = l + r;
                v.clear();
            }
            if (r + l >= m)
                v.add(i);
            l += 1 - n[i];
            r -= n[i];
        }
        if (r + l > m) {
            m = l + r;
            v.clear();
        }
        if (r + l >= m)
            v.add(q);
        return v;
    }
}
