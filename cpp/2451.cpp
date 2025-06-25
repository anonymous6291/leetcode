class Solution {
private:
    void make(string& s, int* d) {
        int n = s.length() - 1;
        for (int i = 0; i < n; i++)
            d[i] = s[i] - s[i + 1];
    }

private:
    bool eqd(int* d1, int* d2, int n) {
        --n;
        while (n >= 0)
            if (d1[n] != d2[n--])
                return false;
        return true;
    }

public:
    string oddString(vector<string>& w) {
        int n = w[0].length() - 1, l = w.size();
        int* d1 = (int*)malloc(sizeof(int) * n);
        int* d2 = (int*)malloc(sizeof(int) * n);
        make(w[0], d1);
        make(w[1], d2);
        if (!eqd(d1, d2, n)) {
            int* d3 = (int*)malloc(sizeof(int) * n);
            make(w[2], d3);
            return w[eqd(d1, d3, n) ? 1 : 0];
        }
        for (int i = 2; i < l; i++) {
            make(w[i], d2);
            if (!eqd(d1, d2, n))
                return w[i];
        }
        return "";
    }
};
