class Solution {
private:
    int abs(int a) { return (a < 0) ? -a : a; }

public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size(), n = grid[0].size(), l = m * n;
        vector<int> arr;
        vector<int> freq(10001, 0);
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                freq[grid[i][j]]++;
        for (int i = 0, k = 0; i < 10001; i++)
            while (freq[i]-- > 0)
                arr.push_back(i);
        int mid = arr[l / 2], count = 0;
        for (int i = 0; i < l; i++) {
            if ((arr[i] - mid) % x != 0)
                return -1;
            count += abs(arr[i] - mid) / x;
        }
        return count;
    }
};
