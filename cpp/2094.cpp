class Solution {
private:
    void find(int* f, int c, int n, vector<int>& r) {
        if (n == 3) {
            if ((c & 1) == 0)
                r.push_back(c);
            return;
        }
        for (int i = (n == 0 ? 1 : 0); i < 10; i++) {
            if (f[i] > 0) {
                f[i]--;
                find(f, c * 10 + i, n + 1, r);
                f[i]++;
            }
        }
    }

public:
    vector<int> findEvenNumbers(vector<int>& d) {
        int f[10] = {0};
        for (int i : d)
            f[i]++;
        vector<int> r;
        find(f, 0, 0, r);
        return r;
    }
};
