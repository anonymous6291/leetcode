class Solution {
    int numRabbits(List<int> r) {
        int c = 0, n = r.length;
        List<int> f = [];
        for(int i = 0; i < 1000; i++)
            f.add(0);
        for (int i = 0; i < n; i++)
            if (f[r[i]] > 0)
                f[r[i]]--;
            else {
                c += r[i] + 1;
                f[r[i]] = r[i];
            }
        return c;
    }
}
