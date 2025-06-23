class Solution {
    int partitionString(String s) {
        int n = s.length, c = 1, f = 0;
        String l = "abcdefghijklmnopqrstuvwxyz";
        for (int i = 0; i < n; i++) {
            int x = 1 << (l.indexOf(s[i]));
            if ((f & x) != 0) {
                f = 0;
                c++;
            }
            f |= x;
        }
        return c;
    }
}
