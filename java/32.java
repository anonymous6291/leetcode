class Solution {
    public int longestValidParentheses(String s) {
        int n = s.length();
        int st[] = new int[n];
        int pv[] = new int[n];
        int m = 0, j = -1, k = -1;
        for (int i = 0; i < n; i++)
            if (s.charAt(i) == '(') {
                st[++j] = i;
                pv[i] = 0;
            } else if (j != -1) {
                int t = st[j--];
                int c = i - t + 1 + ((t > 0) ? pv[t - 1] : 0);
                pv[i] = c;
                m = Math.max(m, c);
            }
        return m;
    }
}
