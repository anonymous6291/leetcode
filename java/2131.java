class Solution {
    public int longestPalindrome(String[] w) {
        int l = 0, f[][] = new int[26][26];
        for (String s : w) {
            int x = s.charAt(0) - 97, y = s.charAt(1) - 97;
            if (f[y][x] > 0) {
                l += 4;
                f[y][x]--;
            } else
                f[x][y]++;
        }
        for (int i = 0; i < 26; i++)
            if (f[i][i] > 0)
                return l + 2;
        return l;
    }
}
