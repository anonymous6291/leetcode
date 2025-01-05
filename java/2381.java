class Solution {
    public String shiftingLetters(String st, int[][] sh) {
        char c[] = st.toCharArray();
        int ch[] = new int[c.length + 1];
        int n1 = c.length, n2 = sh.length, ps = 0;
        for (int i = 0; i < n2; i++) {
            ch[sh[i][0]] += sh[i][2] * 2 - 1;
            ch[sh[i][1] + 1] += -(sh[i][2] * 2 - 1);
        }
        for (int i = 0; i < n1; i++) {
            ps += ch[i];
            c[i] = getS(c[i], ps % 26);
        }
        return new String(c);
    }

    private char getS(char c, int d) {
        return (char) (((c - 71 + d) % 26) + 97);
    }
}
