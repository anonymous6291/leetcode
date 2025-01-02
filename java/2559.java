class Solution {
    private boolean vowel(char c) {
        return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u');
    }

    private boolean vs(String s) {
        return vowel(s.charAt(0)) && vowel(s.charAt(s.length() - 1));
    }

    public int[] vowelStrings(String[] w, int[][] q) {
        int n = w.length;
        int psa[] = new int[n];
        int ps = 0;
        for (int i = 0; i < n; i++) {
            if (vs(w[i]))
                ++ps;
            psa[i] = ps;
        }
        n = q.length;
        int res[] = new int[n];
        for (int i = 0; i < n; i++)
            if (q[i][0] == 0)
                res[i] = psa[q[i][1]];
            else
                res[i] = psa[q[i][1]] - psa[q[i][0] - 1];
        return res;
    }
}
