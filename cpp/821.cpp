class Solution {
private:
    int abs(int i) { return (i < 0) ? -i : i; }

public:
    vector<int> shortestToChar(string& w, char c) {
        int n = w.length();
        vector<int> r(n);
        vector<int> p(n);
        int i = 0, k = 0;
        for (int j = 0; j < n; j++)
            if (w[j] == c)
                p[i++] = j;
        for (int j = 0; j < n; j++) {
            if (k + 1 < i && abs(p[k] - j) > abs(p[k + 1] - j))
                k++;
            r[j] = abs(p[k] - j);
        }
        return r;
    }
};
