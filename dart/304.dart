class NumMatrix {
    List<List<int>> m = [];

    NumMatrix(List<List<int>> m) {
        this.m = m;
        int r = m.length, c = m[0].length;
        for (int i = 0; i < r; i++)
            for (int j = 1; j < c; j++)
                m[i][j] += m[i][j - 1];
        for (int i = 0; i < c; i++)
            for (int j = 1; j < r; j++)
                m[j][i] += m[j - 1][i];
    }
  
    int sumRegion(int x, int y, int b, int c) {
        return m[b][c] - (x > 0 ? m[x - 1][c] : 0) - (y > 0 ? m[b][y - 1] : 0)
                + ((x > 0 && y > 0) ? m[x - 1][y - 1] : 0);
    }
}

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix obj = NumMatrix(matrix);
 * int param1 = obj.sumRegion(row1,col1,row2,col2);
 */
