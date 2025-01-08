class Solution {
    public int numDistinct(String ss, String tt) {
        int n1 = ss.length(), n2 = tt.length();
        if (n1 < n2)
            return 0;
        int dp[][] = new int[n1][n2];
        for (int i = 0; i < n1; i++)
            Arrays.fill(dp[i], -1);
        return find(ss.toCharArray(), tt.toCharArray(), 0, 0, dp);
    }

    private int find(char c[], char s[], int i, int j, int dp[][]) {
        //System.out.println(i+","+j);
        if (j == s.length)
            return 1;
        if (i == c.length || c.length - i < s.length - j)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        int res = find(c, s, i + 1, j, dp);
        if (c[i] == s[j])
            res += find(c, s, i + 1, j + 1, dp);
        dp[i][j] = res;
        return res;
    }
}
