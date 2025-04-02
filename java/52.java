class Solution {
    private int count(int i, int s, boolean c[], boolean r[], boolean l[]) {
        if (i == s)
            return 1;
        int q = 0;
        for (int j = 0; j < s; j++)
            if (!(c[j] || r[i + j] || l[s - i + j])) {
                c[j] = true;
                r[i + j] = true;
                l[s - i + j] = true;
                q += count(i + 1, s, c, r, l);
                c[j] = false;
                r[i + j] = false;
                l[s - i + j] = false;
            }
        return q;
    }

    public int totalNQueens(int n) {
        return count(0, n, new boolean[n], new boolean[2 * n], new boolean[2 * n]);
    }
}
