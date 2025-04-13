class Solution {
    public long countSubstrings(String s, char c) {
        long n = 0;
        for (int l = s.length() - 1; l >= 0; l--)
            if (s.charAt(l) == c)
                n++;
        return (n * (n + 1)) / 2;
    }
}
