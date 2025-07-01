class Solution {
    int possibleStringCount(String w) {
        int n = w.length, c = n;
        for (int i = 1; i < n; i++)
            if (w[i] != w[i - 1])
                c--;
        return c;
    }
}
