class Solution {
    private boolean intersect(int i[], int j[]) {
        if (i[0] > j[0])
            return intersect(j, i);
        return i[1] >= j[0];
    }

    public int[][] insert(int[][] i, int[] j) {
        int n = i.length, m = 0;
        boolean d = false;
        for (int k = 0; k < n; k++) {
            if (intersect(i[k], j)) {
                int s = Math.min(i[k][0], j[0]);
                while (k < n && i[k][0] <= j[1])
                    k++;
                i[m++] = new int[] { s, Math.max(i[--k][1], j[1]) };
                d = true;
            } else
                i[m++] = i[k];
        }
        if (!d) {
            int r[][] = new int[n + 1][];
            m = 0;
            for (int k = 0; k < n; m++) {
                if (!d && i[k][0] > j[0]) {
                    r[m] = j;
                    d = true;
                } else
                    r[m] = i[k++];
            }
            if (!d)
                r[m] = j;
            return r;
        }
        int r[][] = new int[m][];
        for (int k = 0; k < m; k++)
            r[k] = i[k];
        return r;
    }
}
