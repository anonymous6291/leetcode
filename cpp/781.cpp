class Solution {
public:
    int numRabbits(vector<int>& r) {
        int c = 0, n = r.size();
        vector<int> f(1000);
        for (int i = 0; i < n; i++)
            if (f[r[i]] > 0)
                f[r[i]]--;
            else {
                c += r[i] + 1;
                f[r[i]] = r[i];
            }
        return c;
    }
};
