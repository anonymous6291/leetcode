class Solution {
    private void reverse(char c[], int e) {
        int s = 0;
        e--;
        while (s < e) {
            char t = c[s];
            c[s++] = c[e];
            c[e--] = t;
        }
    }

    public String finalString(String s) {
        int n = s.length(), j = 0;
        char res[] = new char[n];
        for (int i = 0; i < n; i++)
            if (s.charAt(i) == 'i')
                reverse(res, j);
            else
                res[j++] = s.charAt(i);
        return new String(res, 0, j);
    }
}
