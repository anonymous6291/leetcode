class Solution {
    public int longestSubsequence(String s, int k) {
        int n = s.length(), pz = 0, l = n - 1;
        long v = 0;
        for (int i = 0; i < n; i++)
            if (s.charAt(i) == '0')
                pz++;
        int m = pz;
        for (int i = n - 1; i >= 0; i--) {
            if (s.charAt(i) == '1')
                v = 1L << (l - i) | v;
            else
                --pz;
            while (v > k) {
                v >>= 1;
                --l;
            }
            m = Math.max(m, pz + l - i + 1);
        }
        return Math.max(m, pz + l + 1);
    }
}
