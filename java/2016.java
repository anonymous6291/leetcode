class Solution {
    public int maximumDifference(int[] n) {
        int p = n[0], l = n.length, m = -1;
        for (int i = 1; i < l; i++)
            if (p < n[i])
                m = Math.max(m, n[i] - p);
            else
                p = n[i];
        return m;
    }
}
