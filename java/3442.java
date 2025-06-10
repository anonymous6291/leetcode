class Solution {
    public int maxDifference(String s) {
        int n = s.length();
        int f[] = new int[26];
        for (int i = 0; i < n; i++)
            f[s.charAt(i) - 97]++;
        int o = 0, e = n;
        for (int i = 0; i < 26; i++)
            if (f[i] != 0) {
                if (f[i] % 2 == 0)
                    e = Math.min(e, f[i]);
                else
                    o = Math.max(o, f[i]);
            }
        return o - e;
    }
}
