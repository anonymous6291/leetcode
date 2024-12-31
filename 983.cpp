class Solution {
private:
    int min(int i, int j) { return (i < j) ? i : j; }

private:
    int find(vector<int>& days, int i, int n, int td, vector<int>& c,
             vector<int>& dp) {
        if (i >= n)
            return 0;
        while (i < n && days[i] < td)
            ++i;
        if (i == n)
            return 0;
        if (dp[i] != 0)
            return dp[i];
        td = days[i];
        return dp[i] = min(min(find(days, i + 1, n, td + 1, c, dp) + c[0],
                               find(days, i + 1, n, td + 7, c, dp) + c[1]),
                           find(days, i + 1, n, td + 30, c, dp) + c[2]);
    }

public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size(), 0);
        return find(days, 0, days.size(), 0, costs, dp);
    }
};
