class Solution {
    public String interpret(String c) {
        int n = c.length(), i = 0;
        char r[] = new char[n];
        for (int j = 0; j < n; j++) {
            if (c.charAt(j) == 'G')
                r[i++] = 'G';
            else if (c.charAt(j + 1) == ')') {
                r[i++] = 'o';
                j++;
            } else {
                r[i++] = 'a';
                r[i++] = 'l';
                j += 3;
            }
        }
        return new String(r, 0, i);
    }
}
