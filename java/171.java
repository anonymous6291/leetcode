class Solution {
    public int titleToNumber(String c) {
        int s = 0, n = c.length(), m = 1;
        for (int i = n - 1; i >= 0; i--, m *= 26)
            s += m * (c.charAt(i) - 64);
        return s;
    }
}
