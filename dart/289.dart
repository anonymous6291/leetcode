class Solution {
    int g(List<List<int>> b, int m, int n, int i, int j) {
        int r = 0;
        if (i - 1 >= 0) {
            r += b[i - 1][j] & 1;
            if (j - 1 >= 0)
                r += b[i - 1][j - 1] & 1;
            if (j + 1 < n)
                r += b[i - 1][j + 1] & 1;
        }
        if (j - 1 >= 0)
            r += b[i][j - 1] & 1;
        if (j + 1 < n)
            r += b[i][j + 1];
        if (i + 1 < m) {
            r += b[i + 1][j];
            if (j - 1 >= 0)
                r += b[i + 1][j - 1];
            if (j + 1 < n)
                r += b[i + 1][j + 1];
        }
        return r;
    }

    void gameOfLife(List<List<int>> b) {
        int m = b.length, n = b[0].length;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int v = g(b, m, n, i, j);
                if (b[i][j] == 0) {
                    if (v == 3)
                        b[i][j] |= 2;
                } else {
                    if (v == 2 || v == 3)
                        b[i][j] |= 2;
                }
            }
        }
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                b[i][j] = (b[i][j] & 2) >> 1;
    }
}
