class Solution {
    public int firstCompleteIndex(int[] arr, int[][] mat) {
        int m = mat.length, n = mat[0].length;
        int ind[][] = new int[m * n + 1][];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                ind[mat[i][j]] = new int[] { i, j };
            }
        int r[] = new int[m];
        int c[] = new int[n];
        int l = arr.length;
        for (int i = 0; i < l; i++) {
            int t[] = ind[arr[i]];
            if (++r[t[0]] == n || ++c[t[1]] == m)
                return i;
        }
        return 0;
    }
}
