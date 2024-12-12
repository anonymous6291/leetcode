class Solution {
    public String removeDuplicates(String s) {
        char c[] = s.toCharArray();
        int i = 0, j = 1, n = c.length;
        for (; j < n; j++)
            if (i != -1 && c[i] == c[j])
                --i;
            else
                c[++i] = c[j];
        return new String(c, 0, i + 1);
    }
}
