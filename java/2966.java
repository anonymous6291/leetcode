class Solution {
    public int[][] divideArray(int[] n, int k) {
        int l = n.length;
        Arrays.sort(n);
        int b = l / 3;
        int r[][] = new int[b][3];
        for (int i = 0, j = 0; i < l; i += 3, j++) {
            if (n[i + 2] - n[i] > k)
                return new int[][] {};
            r[j][0] = n[i];
            r[j][1] = n[i + 1];
            r[j][2] = n[i + 2];
        }
        return r;
    }
}
