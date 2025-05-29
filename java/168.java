class Solution {
    private char g(int c) {
        if (c == 0)
            return 'Z';
        return (char) ('A' + c - 1);
    }

    public String convertToTitle(int c) {
        StringBuilder s = new StringBuilder("");
        while (c > 0) {
            s.append(g(c % 26));
            c = (c - 1) / 26;
        }
        return s.reverse().toString();
    }
}
