class Solution {
    public long gridGame(int[][] grid) {
        int n = grid[0].length;
        long rm2 = Long.MAX_VALUE, ps = 0, ss = 0;
        for (int i = 0; i < n; i++)
            ps += grid[1][i];
        for (int i = n - 1; i >= 0; i--) {
            ps -= grid[1][i];
            long t = Math.max(ss, ps);
            if (rm2 > t)
                rm2 = t;
            ss += grid[0][i];
        }
        return rm2;
    }
}
