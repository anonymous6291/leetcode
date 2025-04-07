class Solution {
    public String removeStars(String s) {
        int n = s.length(), j = 0;
        char r[] = new char[n];
        for (char c : s.toCharArray())
            if (c == '*')
                j--;
            else
                r[j++] = c;
        return new String(r, 0, j);
    }
}
