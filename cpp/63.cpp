class Solution {
private:
    int find(vector<vector<int>>& g, int i, int j, int m, int n,
             vector<vector<int>>& dp) {
        if (g[i][j] == 1)
            return 0;
        if (i == m - 1 && j == n - 1)
            return 1;
        if (dp[i][j] != -1)
            return dp[i][j];
        if (i + 1 < m)
            dp[i][j] = find(g, i + 1, j, m, n, dp);
        else
            dp[i][j] = 0;
        if (j + 1 < n)
            dp[i][j] += find(g, i, j + 1, m, n, dp);
        return dp[i][j];
    }

public:
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        int m = g.size(), n = g[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return find(g, 0, 0, m, n, dp);
    }
};
