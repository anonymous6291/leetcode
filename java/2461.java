class Solution {
    public long maximumSubarraySum(int[] n, int k) {
        long p = 0, m = 0;
        boolean f[] = new boolean[1_00_001];
        int l = n.length, s = 0;
        for (int i = 0; i < l; i++) {
            while (f[n[i]]) {
                f[n[s]] = false;
                p -= n[s++];
            }
            f[n[i]] = true;
            p += n[i];
            if (i - s + 1 == k) {
                m = Math.max(m, p);
                f[n[s]] = false;
                p -= n[s++];
            }
        }
        if (l - s == k)
            return Math.max(p, m);
        return m;
    }
}
