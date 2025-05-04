class Solution {
    public int numEquivDominoPairs(int[][] d) {
        int f[][] = new int[10][10];
        int r = 0;
        for (int i[] : d)
            if (i[0] < i[1])
                r += f[i[0]][i[1]]++;
            else
                r += f[i[1]][i[0]]++;
        return r;
    }
}
