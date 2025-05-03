class Solution {
    String pushDominoes(String d) {
        List<String> c = d.split("");
        int n = d.length, i = 0;
        while (i < n) {
            if (c[i] == 'L') {
                int t = i - 1;
                i++;
                while (t >= 0 && c[t] == '.')
                    c[t--] = 'L';
            } else if (c[i] == 'R') {
                int t = i + 1;
                while (t < n && c[t] == '.')
                    t++;
                if (t == n || c[t] == 'R') {
                    while (i < t)
                        c[i++] = 'R';
                    i = t;
                } else if (c[t] == 'L') {
                    int l = i + ((t - i + 1) >> 1);
                    int k = i;
                    while (i < l)
                        c[i++] = 'R';
                    if (((t - k) % 2) == 0)
                        l++;
                    while (l < t)
                        c[l++] = 'L';
                    i = t + 1;
                } else
                    i = t;
            } else
                i++;
        }
        return c.join("");
    }
}
