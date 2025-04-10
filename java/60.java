class Solution {
    private int fact(int n) {
        if (n == 0)
            return 1;
        return n * fact(n - 1);
    }

    public String getPermutation(int n, int k) {
        char res[] = new char[n];
        boolean taken[] = new boolean[n];
        int cp = fact(n - 1), d = n - 1;
        for (int i = 0; i < n; i++) {
            int j = 1;
            while (cp < k) {
                j++;
                k -= cp;
            }
            int l = -1;
            while (j > 0)
                if (!taken[++l])
                    j--;
            taken[l] = true;
            res[i] = (char) (49 + l);
            if (d != 0)
                cp /= d;
            d--;
        }
        return new String(res);
    }
}
