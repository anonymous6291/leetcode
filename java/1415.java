class Solution {
    int k;

    public String getHappyString(int n, int k) {
        char res[] = new char[n];
        this.k = k;
        for (char c = 'a'; c < 'd'; c++) {
            res[0] = c;
            if (find(res, 1, n))
                return new String(res);
        }
        return "";
    }

    private boolean find(char res[], int i, int n) {
        if (i == n) {
            k--;
            return k == 0;
        }
        for (char c = 'a'; c < 'd'; c++)
            if (res[i - 1] != c) {
                res[i] = c;
                if (find(res, i + 1, n))
                    return true;
            }
        return false;
    }
}
