class Solution {
    public double findMaxAverage(int[] n, int k) {
        int l = n.length, s = 0;
        for (int i = 0; i < k; i++)
            s += n[i];
        int m = s;
        for (int i = k; i < l; i++) {
            s = s - n[i - k] + n[i];
            m = Math.max(m, s);
        }
        return (m * 1.0) / k;
    }
}
