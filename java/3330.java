class Solution {
    public int possibleStringCount(String w) {
        int n = w.length(), c = n;
        for (int i = 1; i < n; i++)
            if (w.charAt(i) != w.charAt(i - 1))
                c--;
        return c;
    }
}
