class Solution {
private:
    int min(int i, int j, int k) {
        if (i < j)
            return (i < k) ? i : k;
        return (j < k) ? j : k;
    }

public:
    int maximalSquare(vector<vector<char>>& mat) {
        int res = 0, m = mat.size(), n = mat[0].size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (mat[i - 1][j - 1] == '1') {
                    int r =
                        min(dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]) + 1;
                    dp[i][j] = r;
                    res = (r > res) ? r : res;
                }
            }
        }
        return res * res;
    }
};
