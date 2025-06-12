class Solution {
    int max(int x, int y){
        return x > y ? x : y;
    }

    int maximumSubarraySum(List<int> n, int k) {
        List<bool> f = [];
        for (int i = 0; i < 100001; i++)
            f.add(false);
        int l = n.length, s = 0, p = 0, m = 0;
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
}
