class Solution {
    public String replaceDigits(String s) {
        int n = s.length();
        char r[] = new char[n];
        for (int i = 0; i < n; i += 2) {
            r[i] = s.charAt(i);
            if (i + 1 < n)
                r[i + 1] = (char) (s.charAt(i) + s.charAt(i + 1) - 48);
        }
        return new String(r);
    }
}
