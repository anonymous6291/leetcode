class Solution {
    public int maxAdjacentDistance(int[] n) {
        int l = n.length, m = Math.abs(n[0] - n[l - 1]);
        for (int i = 1; i < l; i++)
            m = Math.max(m, Math.abs(n[i] - n[i - 1]));
        return m;
    }
}
