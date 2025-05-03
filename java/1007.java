class Solution {
    public int find(int t[], int b[], int v) {
        int ts = 0, bs = 0, n = t.length;
        for (int i = 0; i < n; i++) {
            if (t[i] == v)
                ts++;
            if (b[i] == v)
                bs++;
            else if (t[i] != v)
                return -1;
        }
        return Math.min(Math.min(ts, bs), n - Math.max(ts, bs));
    }

    public int minDominoRotations(int[] t, int[] b) {
        int r = t.length;
        for (int i = 1; i < 7; i++) {
            int v = find(t, b, i);
            if (v != -1)
                r = Math.min(r, v);
        }
        if (r == t.length)
            return -1;
        return r;
    }
}
