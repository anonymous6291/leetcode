class Solution {
    private boolean permutation(int x[], int y[]) {
        for (int i = 0; i < 26; i++)
            if (x[i] != y[i])
                return false;
        return true;
    }

    public boolean checkInclusion(String x, String y) {
        int l = x.length(), m = y.length();
        if (l > m)
            return false;
        int[] i = new int[26], j = new int[26];
        for (int c : x.toCharArray())
            i[c - 97]++;
        for (int k = 0; k < l; k++)
            j[y.charAt(k) - 97]++;
        if (permutation(i, j))
            return true;
        for (int k = l; k < m; k++) {
            j[y.charAt(k - l) - 97]--;
            j[y.charAt(k) - 97]++;
            if (permutation(i, j))
                return true;
        }
        return false;
    }
}
