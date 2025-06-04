class Solution {
    public List<Integer> maxScoreIndices(int[] n) {
        int r = 0, l = 0, q = n.length, m = -1;
        for (int i : n)
            r += i;
        int t = r;
        for (int i = 0; i < q; i++) {
            if (r + l > m)
                m = l + r;
            l += 1 - n[i];
            r -= n[i];
        }
        if (r + l > m)
            m = l + r;
        l = 0;
        r = t;
        List<Integer> v = new ArrayList<>();
        for (int i = 0; i < q; i++) {
            if (l + r == m)
                v.add(i);
            l += 1 - n[i];
            r -= n[i];
        }
        if (l + r == m)
            v.add(q);
        return v;
    }
}
