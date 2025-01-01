class Solution {
    private int max(int i, int j) {
        return (i > j) ? i : j;
    }

    public int maxScore(String s) {
        char c[] = s.toCharArray();
        int n = c.length, r = 0, l = (c[0] == '0' ? 1 : 0);
        for (int i = 1; i < n; i++)
            if (c[i] == '1')
                ++r;
        int maxs = r + l;
        --n;
        for (int i = 1; i < n; i++)
            if (c[i] == '0') {
                ++l;
                maxs = max(maxs, r + l);
            } else
                --r;
        return maxs;
    }
}
