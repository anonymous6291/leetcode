class Solution {
    public int[] transformArray(int[] n) {
        int l = n.length, o = 0;
        for (int i = 0; i < l; i++)
            o += n[i] & 1;
        Arrays.fill(n, 0, l - o, 0);
        Arrays.fill(n, l - o, l, 1);
        return n;
    }
}
