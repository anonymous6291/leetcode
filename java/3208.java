class Solution {
    public int numberOfAlternatingGroups(int[] colors, int k) {
        int n = colors.length, l = n + k, pi = -1, count = 0;
        int ar[] = new int[l];
        System.arraycopy(colors, 0, ar, 0, n);
        System.arraycopy(colors, 0, ar, n, k);
        for (int i = 1; i < l; i++) {
            if (ar[i - 1] == ar[i])
                pi = i - 1;
            else if (i - k == pi)
                pi = -1;
            if (i >= k && pi == -1)
                count++;
        }
        return count;
    }
}
