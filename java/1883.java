class Solution {
    private int min(int i, int j) {
        if (i < j)
            return i;
        return j;
    }

    public int maxIceCream(int[] costs, int coins) {
        int f[] = new int[1_00_001];
        int n = costs.length;
        for (int i = 0; i < n; i++)
            ++f[costs[i]];
        int amount = 0;
        for (int i = 1; i < 1_00_001; i++) {
            if (f[i] != 0) {
                int t = min(f[i], coins / i);
                amount += t;
                coins -= t * i;
            }
            if (i + 1 > coins)
                return amount;
        }
        return amount;
    }
}
