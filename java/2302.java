class Solution {
    public long countSubarrays(int[] n, long k) {
        long c = 0, s = 0;
        int l = n.length, p = -1;
        for (int i = 0; i < l; i++) {
            s += n[i];
            while ((s * (i - p)) >= k)
                s -= n[++p];
            c += i - p;
        }
        return c;
    }
}
