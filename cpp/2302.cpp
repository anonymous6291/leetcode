class Solution {
public:
    long long countSubarrays(vector<int>& n, long long k) {
        long long c = 0, s = 0;
        int l = n.size(), p = -1;
        for (int i = 0; i < l; i++) {
            s += n[i];
            while ((s * (i - p)) >= k)
                s -= n[++p];
            c += i - p;
        }
        return c;
    }
};
