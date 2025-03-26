class Solution {
    public int minOperations(int[][] grid, int x) {
        int m = grid.length, n = grid[0].length, l = m * n, arr[] = new int[l], freq[] = new int[10001];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                freq[grid[i][j]]++;
        for (int i = 0, k = 0; i < 10001; i++)
            while (freq[i]-- > 0)
                arr[k++] = i;
        int mid = arr[l / 2];
        int count = 0;
        for (int i = 0; i < l; i++) {
            if ((arr[i] - mid) % x != 0)
                return -1;
            count += Math.abs(arr[i] - mid) / x;
        }
        return count;
    }
}
