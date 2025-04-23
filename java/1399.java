class Solution {
    private int sum(int i) {
        if (i == 10000)
            return 1;
        return i % 10 + ((i / 10) % 10) + ((i / 100) % 10) + ((i / 1000) % 10);
    }

    public int countLargestGroup(int n) {
        int f[] = new int[37];
        int m = 0, c = 0;
        for (int i = 1; i <= n; i++)
            m = Math.max(m, ++f[sum(i)]);
        for (int i = 0; i < 37; i++)
            if (f[i] == m)
                c++;
        return c;
    }
}
