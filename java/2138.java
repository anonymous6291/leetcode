class Solution {
    public String[] divideString(String s, int k, char f) {
        char c[] = s.toCharArray();
        int l = c.length, q = l / k + (l % k == 0 ? 0 : 1), j = 0;
        String r[] = new String[q];
        for (int i = 0; i < q; i++) {
            if (j + k <= l) {
                r[i] = s.substring(j, j + k);
                j += k;
            } else
                r[i] = s.substring(j, l).concat(new String(new char[] { f }).repeat(k - (l - j)));
        }
        return r;
    }
}
