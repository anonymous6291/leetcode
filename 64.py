class Solution {
private:
    int min(int i, int j) { return (i < j) ? i : j; }

private:
    int find(vector<vector<int>>& g, int i, int j, int m, int n,
             vector<vector<int>>& dp) {
        if (i == m || j == n)
            return 8000000;
        if (i == m - 1 && j == n - 1)
            return g[i][j];
        if (dp[i][j] != -1)
            return dp[i][j];
        return (dp[i][j] = (min(find(g, i + 1, j, m, n, dp),
                                find(g, i, j + 1, m, n, dp)) +
                            g[i][j]));
    }

public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return find(grid, 0, 0, m, n, dp);
    }
};
