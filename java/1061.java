class Solution {
    private int find(int c[], int i) {
        if (c[i] == i)
            return c[i];
        c[i] = find(c, c[i]);
        return c[i];
    }

    public String smallestEquivalentString(String x, String y, String b) {
        int n = x.length(), l = b.length();
        int c[] = new int[26];
        for (int i = 0; i < 26; i++)
            c[i] = i;
        for (int i = 0; i < n; i++) {
            int u = x.charAt(i) - 'a', v = y.charAt(i) - 'a';
            int g = find(c, u), h = find(c, v);
            if (g < h)
                c[h] = g;
            else
                c[g] = h;
        }
        char r[] = new char[l];
        for (int i = 0; i < l; i++)
            r[i] = (char) (find(c, b.charAt(i) - 'a') + 'a');
        return new String(r);
    }
}
