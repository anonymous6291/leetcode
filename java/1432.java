class Solution {
    private int len(int n) {
        int l = 0;
        while (n > 0) {
            l++;
            n /= 10;
        }
        return l;
    }

    private int ft(int d[], int x, int y) {
        int l = d.length;
        for (int i = 0; i < l; i++)
            if (d[i] != x && d[i] != y)
                return i;
        return -1;
    }

    private int rac(int d[], int o, int n) {
        int l = d.length, v = 0;
        for (int i = 0; i < l; i++)
            v = v * 10 + (d[i] == o ? n : d[i]);
        return v;
    }

    public int maxDiff(int n) {
        int l = len(n);
        int d[] = new int[l];
        for (int i = l - 1, t = n; i >= 0; i--, t /= 10)
            d[i] = t % 10;
        int i = ft(d, -1, 9), e = i == -1 ? n : rac(d, d[i], 9);
        i = ft(d, 0, 1);
        return e - (i == -1 ? n : rac(d, d[i], i == 0 ? 1 : 0));
    }
}
