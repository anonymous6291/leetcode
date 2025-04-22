class Solution {
    public int numIdenticalPairs(int[] n) {
        int f[] = new int[101];
        int c = 0;
        for (int i = n.length - 1; i >= 0; i--)
            c += f[n[i]]++;
        return c;
    }
}
