class Solution {
    String replaceDigits(String s) {
        int n = s.length;
        String r = "", x = "abcdefghijklmnopqrstuvwxyz", y = "0123456789";
        for (int i = 0; i < n; i += 2) {
            r += s[i];
            if (i + 1 < n)
                r += x[x.indexOf(s[i]) + y.indexOf(s[i + 1])];
        }
        return r;
    }
}
