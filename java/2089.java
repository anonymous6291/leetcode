class Solution {
    public List<Integer> targetIndices(int[] n, int t) {
        List<Integer> r = new ArrayList<>();
        int f[] = new int[101];
        int l = n.length;
        for (int i = 0; i < l; i++)
            f[n[i]]++;
        for (int i = 0, p = -1; i < 101; i++) {
            if (i == t) {
                while (f[i]-- > 0)
                    r.add(++p);
                return r;
            }
            p += f[i];
        }
        return r;
    }
}
