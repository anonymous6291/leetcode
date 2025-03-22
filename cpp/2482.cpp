class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> rs(m, 0);
        vector<int> cs(n, 0);
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == 1) {
                    rs[i] += 1;
                    cs[j] += 1;
                }
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                grid[i][j] = rs[i] * 2 - m + cs[j] * 2 - n;
        return grid;
    }
};
