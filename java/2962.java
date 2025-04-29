class Solution {
    public long countSubarrays(int[] n, int k) {
        int m = n[0], p = 0, c = 0, l = n.length;
        long t = 0;
        for (int i : n)
            if (i > m)
                m = i;
        for (int i = 0; i < l; i++) {
            if (m == n[i])
                c++;
            if (c == k) {
                long x = p;
                while (c == k)
                    if (m == n[p++])
                        c--;
                t += (p - x) * (l - i);
            }
        }
        return t;
    }
}
