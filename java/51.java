class Solution {
    int z;
    char b[][];
    boolean c[];
    int p[][];
    List<List<String>> a;

    public List<List<String>> solveNQueens(int n) {
        z = n;
        b = new char[n][n];
        c = new boolean[n];
        p = new int[n][2];
        a = new ArrayList<>();
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                b[i][j] = '.';
        find(0);
        return a;
    }

    public int abs(int a) {
        return a < 0 ? -a : a;
    }

    private void find(int i) {
        if (i == z) {
            List<String> l = new ArrayList<>();
            for (char t[] : b)
                l.add(new String(t));
            a.add(l);
            return;
        }
        for (int j = 0; j < z; j++)
            if (!c[j]) {
                boolean Q = true;
                for (int k = 0; k < i; k++)
                    if (abs(p[k][0] - i) == abs(p[k][1] - j)) {
                        Q = false;
                        break;
                    }
                if (Q) {
                    c[j] = true;
                    b[i][j] = 'Q';
                    p[i][0] = i;
                    p[i][1] = j;
                    find(i + 1);
                    c[j] = false;
                    b[i][j] = '.';
                }
            }
    }
}
