class Solution {
public:
    int find(string& s1, int i, string& s2, int j, vector<vector<int>>& dp) {
        if (i == s1.size())
            return s2.size() - j;
        if (j == s2.size())
            return s1.size() - i;
        if (dp[i][j] != -1)
            return dp[i][j];
        int res;
        if (s1[i] == s2[j])
            res = find(s1, i + 1, s2, j + 1, dp);
        else
            res = min(find(s1, i + 1, s2, j + 1, dp),
                      min(find(s1, i + 1, s2, j, dp),
                          find(s1, i, s2, j + 1, dp))) +
                  1;
        return dp[i][j] = res;
    }

public:
    int minDistance(string w1, string w2) {
        vector<vector<int>> dp(w1.size() + 1, vector<int>(w2.size() + 1, -1));
        return find(w1, 0, w2, 0, dp);
    }
};
