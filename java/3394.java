class Solution {
    private boolean check(int rec[][], int j) {
        Arrays.sort(rec, (a, b) -> a[j] - b[j]);
        boolean cf = false;
        int pj = rec[0][j + 2];
        for (int i[] : rec) {
            if (pj <= i[j]) {
                if (cf)
                    return true;
                cf = true;
            }
            pj = Math.max(pj, i[j + 2]);
        }
        return false;
    }

    public boolean checkValidCuts(int n, int[][] rec) {
        return check(rec, 1) || check(rec, 0);
    }
}
