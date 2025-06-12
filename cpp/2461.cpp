class Solution {
public:
    long long maximumSubarraySum(vector<int>& n, int k) {
        long p = 0, m = 0;
        vector<bool> f(100001);
        int l = n.size(), s = 0;
        for (int i = 0; i < l; i++) {
            while (f[n[i]]) {
                f[n[s]] = false;
                p -= n[s++];
            }
            f[n[i]] = true;
            p += n[i];
            if (i - s + 1 == k) {
                m = max(m, p);
                f[n[s]] = false;
                p -= n[s++];
            }
        }
        if (l - s == k)
            return max(p, m);
        return m;
    }
};
