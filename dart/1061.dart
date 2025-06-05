class Solution {
    int find(List<int> c, int i) {
        if (c[i] == i)
            return c[i];
        c[i] = find(c, c[i]);
        return c[i];
    }

    String smallestEquivalentString(String x, String y, String b) {
        int n = x.length, l = b.length;
        String k = "abcdefghijklmnopqrstuvwxyz";
        List<int> c = [];
        for (int i = 0; i < 26; i++)
            c.add(i);
        for (int i = 0; i < n; i++) {
            int g = find(c, k.indexOf(x[i])), h = find(c, k.indexOf(y[i]));
            if (g < h)
                c[h] = g;
            else
                c[g] = h;
        }
        String r = "";
        for (int i = 0; i < l; i++)
            r += k[find(c, k.indexOf(b[i]))];
        return r;
  }
}
