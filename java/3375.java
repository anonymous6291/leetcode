class Solution {
    public int minOperations(int[] n, int k) {
        boolean f[] = new boolean[101];
        int c = 0;
        for (int i = n.length - 1; i >= 0; i--) {
            if (n[i] < k)
                return -1;
            f[n[i]] = true;
        }
        for (int i = 100; i > k; i--)
            if (f[i])
                c++;
        return c;
    }
}
