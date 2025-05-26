class Solution {
    public List<String> printVertically(String s) {
        int c = 1, m = 0, n = s.length(), p = 0;
        char w[] = s.toCharArray();
        for (int i = 0; i < n; i++)
            if (w[i] == ' ') {
                m = Math.max(m, i - p);
                p = i + 1;
                c++;
            }
        m = Math.max(n - p, m);
        char r[][] = new char[m][c];
        int i = 0;
        for (int j = 0; j < c; j++) {
            for (int k = 0; k < m; k++) {
                if (i < n && w[i] != ' ')
                    r[k][j] = w[i++];
                else
                    r[k][j] = ' ';
            }
            i++;
        }
        List<String> t = new ArrayList<>();
        for (char u[] : r) {
            int x = c - 1;
            while (x >= 0 && u[x] == ' ')
                x--;
            t.add(new String(u, 0, x + 1));
        }
        return t;
    }
}
