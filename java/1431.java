class Solution {
    public List<Boolean> kidsWithCandies(int[] c, int e) {
        int m = -1, n = c.length;
        for (int i = 0; i < n; i++)
            m = Math.max(m, c[i]);
        List<Boolean> l = new ArrayList<>();
        for (int i = 0; i < n; i++)
            l.add((c[i] + e) >= m);
        return l;
    }
}
