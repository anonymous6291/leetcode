class Solution {
private:
    int min(int i, int j) { return (i < j) ? i : j; }

private:
    int find(vector<vector<int>>& tri, int i, int j, vector<int>& mins) {
        if (i == tri.size() - 1)
            return tri[i][j];
        int m1 = (j != 0) ? (mins[i + 1]) : (find(tri, i + 1, j, mins));
        int m2 = find(tri, i + 1, j + 1, mins);
        mins[i + 1] = m2;
        return min(m1, m2) + tri[i][j];
    }

public:
    int minimumTotal(vector<vector<int>>& tri) {
        vector<int> mins(tri.size());
        return find(tri, 0, 0, mins);
    }
};
