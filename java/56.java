class Solution {
    public int[][] merge(int[][] j) {
        int k = 10001, m = 0;
        for (int i[] : j) {
            k = Math.min(k, Math.min(i[0], i[1]));
            m = Math.max(m, Math.max(i[0], i[1]));
        }
        int[] s = new int[m - k + 1], e = new int[m - k + 1];
        for (int i[] : j) {
            s[i[0] - k]++;
            e[i[1] - k]++;
        }
        List<int[]> l = new ArrayList<>();
        int p = 0, x = -1;
        m -= k - 1;
        for (int i = 0; i < m; i++) {
            p += s[i];
            if (p > 0 && x == -1)
                x = i;
            p -= e[i];
            if (p == 0 && x != -1) {
                l.add(new int[] { x + k, i + k });
                x = -1;
            }
        }
        m = l.size();
        int r[][] = new int[m][];
        for (int i = 0; i < m; i++)
            r[i] = l.get(i);
        return r;
    }
}
