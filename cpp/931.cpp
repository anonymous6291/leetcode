class Solution {
private:
    int min(int i, int j) { return (i < j) ? i : j; }

private:
    int find(vector<vector<int>>& mat, int i, int j, int m,
             vector<vector<int>>& dp) {
        if (i == m - 1)
            return (j >= 0 && j < m) ? mat[i][j] : 2000000;
        if (j < 0 || j >= m)
            return 2000000;
        if (dp[i][j] != 2000000)
            return dp[i][j];
        int res = (min(min(find(mat, i + 1, j - 1, m, dp),
                           find(mat, i + 1, j, m, dp)),
                       find(mat, i + 1, j + 1, m, dp)) +
                   mat[i][j]);
        dp[i][j] = res;
        return res;
    }

public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int m = mat.size();
        vector<vector<int>> dp(m, vector<int>(m, 2000000));
        int minc = find(mat, 0, 0, m, dp);
        for (int i = 1; i < m; i++)
            minc = min(minc, find(mat, 0, i, m, dp));
        return minc;
    }
};
