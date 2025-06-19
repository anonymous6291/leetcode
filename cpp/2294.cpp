class Solution {
public:
    int partitionArray(vector<int>& n, int k) {
        int s = n[0], e = n[0], p = 0, c = 0;
        for (int i : n) {
            s = min(s, i);
            e = max(e, i);
        }
        e = e - s + 1;
        vector<bool> f(e);
        for (int i : n)
            f[i - s] = true;
        for (int i = 0; i < e; i++)
            if (f[i] && i - p > k) {
                p = i;
                c++;
            }
        return c + 1;
    }
};
