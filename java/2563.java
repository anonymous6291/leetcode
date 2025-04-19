class Solution {
    public long countFairPairs(int[] n, int l, int u) {
        Arrays.sort(n);
        return find(n, u) - find(n, l - 1);
    }

    private long find(int n[], int u) {
        int s = 0, e = n.length - 1;
        long r = 0;
        while (s < e) {
            if (n[s] + n[e] > u)
                e--;
            else {
                r += e - s;
                s++;
            }
        }
        return r;
    }
}
