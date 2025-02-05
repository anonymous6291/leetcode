class Solution {
    public boolean areAlmostEqual(String s1, String s2) {
        int s = 0, n = s1.length();
        while (s < n && s1.charAt(s) == s2.charAt(s))
            ++s;
        if (s == n)
            return true;
        int e = n - 1;
        while (s1.charAt(e) == s2.charAt(e))
            --e;
        if (s1.charAt(s) != s2.charAt(e) || s1.charAt(e) != s2.charAt(s))
            return false;
        ++s;
        while (s < e) {
            if (s1.charAt(s) != s2.charAt(s))
                return false;
            ++s;
        }
        return true;
    }
}
