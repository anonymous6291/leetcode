#define max(a, b) ((a > b) ? a : b)
#define min(a, b) ((a < b) ? a : b)

class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        long long rm2 = 11000000000, ps = 0, ss = 0;
        for (int i = 0; i < n; i++)
            ps += grid[1][i];
        for (int i = n - 1; i >= 0; i--) {
            ps -= grid[1][i];
            rm2 = min(rm2, max(ss, ps));
            ss += grid[0][i];
        }
        return rm2;
    }
};
