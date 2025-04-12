class Solution {
    long count = 0;
    int n;
    HashSet<Long> set;

    private int combination(int n, int r) {
        int num = 1, den = 1;
        for (int i = 1; i <= n; i++)
            num *= i;
        for (int i = 1; i <= r; i++)
            den *= i;
        for (int i = n - r; i >= 1; i--)
            den *= i;
        return num / den;
    }

    private void find(long num, long p, long s, int k) {
        if (p < s) {
            if (num % k == 0) {
                int f[] = new int[10];
                while (num > 0) {
                    f[(int) (num % 10)]++;
                    num /= 10;
                }
                for (int i = 0; i < 10; i++) {
                    for (int j = f[i]; j > 0; j--)
                        num = num * 10 + i;
                }
                if (set.add(num)) {
                    int n = this.n;
                    long total = combination(n - 1, f[0]);
                    for (int i : f)
                        if (i != 0) {
                            total *= combination(n, i);
                            n -= i;
                        }
                    total /= combination(this.n, f[0]);
                    count += total;
                }
            }
            return;
        }
        for (int i = 0; i < 10; i++) {
            find(num, p / 10, s * 10, k);
            if (p == s)
                num += p;
            else
                num += p + s;
        }
    }

    public long countGoodIntegers(int n, int k) {
        this.n = n;
        long p = (long) Math.pow(10, n - 1);
        long num = 0;
        set = new HashSet<>();
        for (int i = 1; i <= 9; i++) {
            num += p + (p == 1 ? 0 : 1);
            find(num, p / 10, 10, k);
        }
        return count;
    }
}
