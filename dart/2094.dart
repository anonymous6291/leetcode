class Solution {
    void find(List<int> f, int c, int n, List<int> r) {
        if (n == 3) {
            if ((c & 1) == 0)
                r.add(c);
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

   List<int> findEvenNumbers(List<int> d) {
        List<int> f = [];
        for (int i = 0; i < 10; i++)
             f.add(0);
        for (int i in d)
            f[i]++;
        List<int> r = [];
        find(f, 0, 0, r);
        return r;
   }
}
