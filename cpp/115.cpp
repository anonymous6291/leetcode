class Solution {
private:
    int find(string& c, string& s, int i, int j, vector<vector<int>>& dp) {
        if (j == s.length())
            return 1;
        if (i == c.length() || c.length() - i < s.length() - j)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        int res = find(c, s, i + 1, j, dp);
        if (c.at(i) == s.at(j))
            res += find(c, s, i + 1, j + 1, dp);
        dp[i][j] = res;
        return res;
    }

public:
    int numDistinct(string s, string t) {
        int n1 = s.length(), n2 = t.length();
        if (n1 < n2)
            return 0;
        vector<vector<int>> dp(n1, vector<int>(n2, -1));
        return find(s, t, 0, 0, dp);
    }
};
