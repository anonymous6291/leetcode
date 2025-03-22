class Solution {
    public int[][] onesMinusZeros(int[][] grid) {
        int m = grid.length, n = grid[0].length;
        int rs[] = new int[m], cs[] = new int[n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                rs[i] += grid[i][j];
                cs[j] += grid[i][j];
            }
        }
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                grid[i][j] = rs[i] * 2 - m + cs[j] * 2 - n;
        return grid;
    }
}
