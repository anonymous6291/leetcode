class Solution {
    private void find(int f[], int c, int n, List<Integer> r) {
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

    public int[] findEvenNumbers(int[] d) {
        int f[] = new int[10];
        for (int i : d)
            f[i]++;
        List<Integer> r = new ArrayList<>();
        find(f, 0, 0, r);
        int n = r.size();
        int k[] = new int[n];
        for (int i = 0; i < n; i++)
            k[i] = r.get(i);
        return k;
    }
}
