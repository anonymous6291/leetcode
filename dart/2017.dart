class Solution {
    int max(int i, int j){
        return (i > j) ? i : j;
    }

    int min(int i, int j){
        return (i < j) ? i : j;
    }

    int gridGame(List<List<int>> grid) {
        int n = grid[0].length;
        int rm2 = 11000000000, ps = 0, ss = 0;
        for (int i = 0; i < n; i++)
            ps += grid[1][i];
        for (int i = n - 1; i >= 0; i--) {
            ps -= grid[1][i];
            rm2 = min(rm2, max(ss, ps));
            ss += grid[0][i];
        }
        return rm2;
    }
}
