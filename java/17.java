class Solution {
    private final char m[][] = new char[][] { { 'a', 'b', 'c' }, { 'd', 'e', 'f' }, { 'g', 'h', 'i' },
            { 'j', 'k', 'l' },
            { 'm', 'n', 'o' }, { 'p', 'q', 'r', 's' }, { 't', 'u', 'v' }, { 'w', 'x', 'y', 'z' } };
    List<String> res;

    private void find(char d[], int i, int n, char p[]) {
        if (i == n) {
            res.add(new String(p));
            return;
        }
        for (char c : m[d[i] - '2']) {
            p[i] = c;
            find(d, i + 1, n, p);
        }
    }

    public List<String> letterCombinations(String d) {
        int n = d.length();
        res = new ArrayList<>();
        if (n == 0)
            return res;
        find(d.toCharArray(), 0, n, new char[n]);
        return res;
    }
}
