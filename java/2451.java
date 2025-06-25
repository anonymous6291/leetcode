class Solution {
    private void make(String s, int d[]) {
        int n = s.length() - 1;
        for (int i = 0; i < n; i++)
            d[i] = s.charAt(i) - s.charAt(i + 1);
    }

    private boolean eqd(int d1[], int d2[]) {
        int n = d1.length - 1;
        while (n >= 0)
            if (d1[n] != d2[n--])
                return false;
        return true;
    }

    public String oddString(String[] w) {
        int n = w[0].length(), l = w.length;
        int[] d1 = new int[n - 1], d2 = new int[n - 1];
        make(w[0], d1);
        make(w[1], d2);
        if (!eqd(d1, d2)) {
            int d3[] = new int[n - 1];
            make(w[2], d3);
            return w[eqd(d1, d3) ? 1 : 0];
        }
        for (int i = 2; i < l; i++) {
            make(w[i], d2);
            if (!eqd(d1, d2))
                return w[i];
        }
        return "";
    }
}
