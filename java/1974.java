class Solution {
    public int minTimeToType(String s) {
        int c = s.length(), n = c;
        char w[] = s.toCharArray();
        char p = 'a';
        for (int i = 0; i < n; i++)
            if (w[i] != p) {
                c += Math.min((p - w[i] + 26) % 26, 26 - ((p - w[i] + 26) % 26));
                p = w[i];
            }
        return c;
    }
}
