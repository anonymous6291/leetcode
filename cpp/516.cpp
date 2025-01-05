class Solution {
private:
    int max(int i, int j) { return (i > j) ? i : j; }

private:
    int find(string& c, int s, int e, vector<vector<int>>& dp) {
        if (s > e)
            return 0;
        if (s == e)
            return 1;
        if (dp[s][e] != -1)
            return dp[s][e];
        int res;
        if (c[s] == c[e])
            res = find(c, s + 1, e - 1, dp) + 2;
        else
            res = max(find(c, s + 1, e, dp), find(c, s, e - 1, dp));
        dp[s][e] = res;
        return res;
    }

public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return find(s, 0, n - 1, dp);
    }
};
