class Solution {
    public int[] buildArray(int[] n) {
        int l = n.length;
        int r[] = new int[l];
        for (int i = 0; i < l; i++)
            r[i] = n[n[i]];
        return r;
    }
}
