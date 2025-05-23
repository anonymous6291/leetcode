class Solution {
    public boolean checkValid(int[][] m) {
        int n = m.length;
        for (int i = 0; i < n; i++) {
            boolean x[] = new boolean[n + 1], y[] = new boolean[n + 1];
            for (int j = 0; j < n; j++) {
                x[m[i][j]] = true;
                y[m[j][i]] = true;
            }
            for (int j = 1; j <= n; j++)
                if (!x[j] || !y[j])
                    return false;
        }
        return true;
    }
}
