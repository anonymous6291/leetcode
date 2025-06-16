class Solution {
    private int find(int f[], int x) {
        for (int i = 0; i < 50; i++) {
            x -= f[i];
            if (x < 1)
                return i - 50;
        }
        return 0;
    }

    public int[] getSubarrayBeauty(int[] n, int k, int x) {
        int l = n.length;
        int[] f = new int[101], r = new int[l - k + 1];
        for (int i = 0; i < k; i++)
            f[n[i] + 50]++;
        r[0] = find(f, x);
        for (int i = k; i < l; i++) {
            f[n[i - k] + 50]--;
            f[n[i] + 50]++;
            r[i - k + 1] = find(f, x);
        }
        return r;
    }
}
