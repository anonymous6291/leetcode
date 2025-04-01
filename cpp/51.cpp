class Solution {
private:
    bool diagonal(int a, int b) { return (a == b) || ((a + b) == 0); }

private:
    void find(int i, int z, vector<string>& b, vector<bool>& c,
              vector<vector<int>>& p, vector<vector<string>>& a) {
        if (i == z) {
            a.push_back(b);
            return;
        }
        for (int j = 0; j < z; j++)
            if (!c[j]) {
                bool Q = true;
                for (int k = 0; k < i; k++)
                    if (diagonal(p[k][0] - i, p[k][1] - j)) {
                        Q = false;
                        break;
                    }
                if (Q) {
                    c[j] = true;
                    b[i][j] = 'Q';
                    p[i][0] = i;
                    p[i][1] = j;
                    find(i + 1, z, b, c, p, a);
                    c[j] = false;
                    b[i][j] = '.';
                }
            }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> a;
        vector<bool> c(n, false);
        vector<string> b(n, string(n, '.'));
        vector<vector<int>> p(n, vector<int>(2));
        find(0, n, b, c, p, a);
        return a;
    }
};
