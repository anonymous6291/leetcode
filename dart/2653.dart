class Solution {
    int find(List<int> f, int x) {
        for (int i = 0; i < 50; i++) {
            x -= f[i];
            if (x < 1)
                return i - 50;
        }
        return 0;
    }

    List<int> getSubarrayBeauty(List<int> n, int k, int x) {
        int l = n.length;
        List<int> f = [];
        for (int i = 0; i < 101; i++)
            f.add(0);
        List<int> r = [];
        for (int i = 0; i < k; i++)
            f[n[i] + 50]++;
        r.add(find(f, x));
        for (int i = k; i < l; i++) {
            f[n[i - k] + 50]--;
            f[n[i] + 50]++;
            r.add(find(f, x));
        }
        return r;
    }
}
