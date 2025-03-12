class Solution {
    public int findJudge(int n, int[][] trust) {
        int tc[] = new int[n + 1];
        for (int i[] : trust) {
            tc[i[0]] = -10000;
            tc[i[1]]++;
        }
        int judge = -1;
        for (int i = n; i > 0; i--)
            if (tc[i] == n - 1) {
                if (judge != -1)
                    return -1;
                judge = i;
            }
        return judge;
    }
}
