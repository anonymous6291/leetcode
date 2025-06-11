class Solution {
    private int find(String s) {
        int n = s.length(), v = 0;
        for (int i = 0; i < n; i++) {
            int t = s.charAt(i) - 48;
            if (t > 9)
                return n;
            v = v * 10 + t;
        }
        return v;
    }

    public int maximumValue(String[] s) {
        int m = 0;
        for (String t : s)
            m = Math.max(m, find(t));
        return m;
    }
}
