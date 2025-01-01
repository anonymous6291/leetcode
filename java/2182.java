class Solution {
    public String repeatLimitedString(String s, int rl) {
        int f[] = new int[26];
        for (char c : s.toCharArray())
            ++f[c - 'a'];
        char res[] = new char[s.length()];
        int i = 0, j = 25, p = -1;
        while (j >= 0) {
            if (f[j] == 0)
                --j;
            else {
                if (p == j) {
                    int t = j - 1;
                    while (t >= 0 && f[t] == 0)
                        --t;
                    if (t == -1)
                        return new String(res, 0, i);
                    --f[t];
                    res[i++] = (char) ('a' + t);
                }
                int n = Math.min(f[j], rl);
                f[j] -= n;
                while (--n >= 0)
                    res[i++] = (char) ('a' + j);
                p = j;
            }
        }
        return new String(res, 0, i);
    }
}
