class Solution {
    private int abs(int i) {
        return (i < 0) ? -i : i;
    }

    public int[] shortestToChar(String s, char c) {
        int n = s.length();
        int r[] = new int[n];
        int p[] = new int[n];
        int i = 0, k = 0;
        char w[] = s.toCharArray();
        for (int j = 0; j < n; j++)
            if (w[j] == c)
                p[i++] = j;
        for (int j = 0; j < n; j++) {
            if (k + 1 < i && abs(p[k] - j) > abs(p[k + 1] - j))
                k++;
            r[j] = abs(p[k] - j);
        }
        return r;
    }
}
