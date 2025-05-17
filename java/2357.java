class Solution {
    public int minimumOperations(int[] n) {
        boolean f[] = new boolean[101];
        int c = 0;
        for (int i : n) {
            if (i != 0 && !f[i]) {
                f[i] = true;
                c++;
            }
        }
        return c;
    }
}
