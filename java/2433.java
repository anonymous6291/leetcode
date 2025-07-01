class Solution {
    public int[] findArray(int[] p) {
        for (int i = p.length - 1; i > 0; i--)
            p[i] ^= p[i - 1];
        return p;
    }
}
