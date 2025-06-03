class Solution {
    boolean p[];
    boolean v[];

    private int traverse(int s[], int c[], int k[][], int b[][], int j) {
        if (s[j] == 0) {
            p[j] = true;
            return 0;
        }
        if (v[j])
            return 0;
        v[j] = true;
        int r = c[j];
        for (int m : k[j]) {
            s[m] = 1;
            if (p[m])
                r += traverse(s, c, k, b, m);
        }
        for (int m : b[j])
            r += traverse(s, c, k, b, m);
        return r;
    }

    public int maxCandies(int[] s, int[] c, int[][] k, int[][] b, int[] i) {
        int n = s.length;
        p = new boolean[n];
        v = new boolean[n];
        int r = 0;
        for (int j : i)
            r += traverse(s, c, k, b, j);
        return r;
    }
}
//int[] status, int[] candies, int[][] keys, int[][] containedBoxes, int[] initialBoxes
