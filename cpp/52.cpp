class Solution {
private:
    int count(int i, int s, vector<bool>& c, vector<bool>& r, vector<bool>& l) {
        if (i == s)
            return 1;
        int q = 0;
        for (int j = 0; j < s; j++)
            if (!(c[j] || r[i + j] || l[s - i + j])) {
                c[j] = true;
                r[i + j] = true;
                l[s - i + j] = true;
                q += count(i + 1, s, c, r, l);
                c[j] = false;
                r[i + j] = false;
                l[s - i + j] = false;
            }
        return q;
    }

public:
    int totalNQueens(int n) {
        vector<bool> c(n);
        vector<bool> r(2 * n);
        vector<bool> l(2 * n);
        return count(0, n, c, r, l);
    }
};
