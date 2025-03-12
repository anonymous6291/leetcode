class Solution {
    private void ma(int ic[][], int i, int n, boolean trav[]) {
        if (trav[i])
            return;
        trav[i] = true;
        for (int j = 0; j < n; j++)
            if (ic[i][j] == 1)
                ma(ic, j, n, trav);
    }

    public int findCircleNum(int[][] ic) {
        int n = ic.length, prov = 0;
        boolean trav[] = new boolean[n];
        for (int i = 0; i < n; i++)
            if (!trav[i]) {
                ma(ic, i, n, trav);
                prov++;
            }
        return prov;
    }
}
