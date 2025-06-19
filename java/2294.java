class Solution {
    public int partitionArray(int[] n, int k) {
        int s = n[0], e = n[0], p = 0, c = 0;
        for (int i : n) {
            s = Math.min(s, i);
            e = Math.max(e, i);
        }
        e = e - s + 1;
        boolean f[] = new boolean[e];
        for (int i : n)
            f[i - s] = true;
        for (int i = 0; i < e; i++)
            if (f[i] && i - p > k) {
                p = i;
                c++;
            }
        return c + 1;
    }
}
