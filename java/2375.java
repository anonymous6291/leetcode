class Solution {
    public String smallestNumber(String p) {
        int n = p.length();
        char res[] = new char[n + 1];
        boolean trav[] = new boolean[10];
        for (int i = 1; i <= 9; i++) {
            trav[i] = true;
            if (find(res, p.toCharArray(), trav, i, 0, n))
                return new String(res);
            trav[i] = false;
        }
        return "";
    }

    private boolean find(char res[], char p[], boolean trav[], int s, int i, int n) {
        res[i] = (char) (s + '0');
        if (i == n)
            return true;
        while (true) {
            s = s + ((p[i] == 'I') ? 1 : -1);
            if (s < 1 || s > 9)
                return false;
            if (!trav[s]) {
                trav[s] = true;
                if (find(res, p, trav, s, i + 1, n))
                    return true;
                trav[s] = false;
            }
        }
    }
}
