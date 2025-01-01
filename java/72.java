class Solution {
    private int min(int i, int j) {
        return (i < j) ? i : j;
    }

    private int min3(int i, int j, int k) {
        return min(i, min(j, k));
    }

    public int minDistance(String sw1, String sw2) {
        int n1 = sw1.length(), n2 = sw2.length();
        if (n1 == 0)
            return n2;
        if (n2 == 0)
            return n1;
        char w1[] = sw1.toCharArray();
        char w2[] = sw2.toCharArray();
        int dp[][] = new int[n1][n2];
        return find(w1, 0, w2, 0, dp);
    }

    private int find(char s1[], int i, char s2[], int j, int dp[][]) {
        if (i == s1.length)
            return s2.length - j;
        if (j == s2.length)
            return s1.length - i;
        if (dp[i][j] != 0)
            return dp[i][j];
        int res;
        if (s1[i] == s2[j])
            res = find(s1, i + 1, s2, j + 1, dp);
        else
            res = min3(find(s1, i + 1, s2, j + 1, dp),
                    find(s1, i + 1, s2, j, dp), find(s1, i, s2, j + 1, dp)) + 1;
        dp[i][j] = res;
        return res;
    }
}
