class Solution {
    public int countCompleteSubarrays(int[] n) {
        int d = 0, l = n.length, c = 0, t = 0, p = 0;
        boolean f[] = new boolean[2001];
        int o[] = new int[2001];
        for (int i = 0; i < l; i++)
            if (!f[n[i]]) {
                d++;
                f[n[i]] = true;
            }
        for (int i = 0; i < l; i++) {
            if (o[n[i]] == 0)
                c++;
            o[n[i]]++;
            int u = p;
            while (c >= d) {
                o[n[p]]--;
                if (o[n[p]] == 0)
                    c--;
                p++;
                if (c < d) {
                    t += (p - u) * (l - i);
                    break;
                }
            }
        }
        return t;
    }
}
