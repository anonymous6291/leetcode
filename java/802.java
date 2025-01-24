class Solution {
    public List<Integer> eventualSafeNodes(int[][] g) {
        int n = g.length;
        boolean pter[] = new boolean[n];
        boolean trav[] = new boolean[n];
        List<Integer> res = new ArrayList<>();
        for (int i = 0; i < n; i++)
            if (find(g, i, pter, trav))
                res.add(i);
        return res;
    }

    private boolean find(int g[][], int i, boolean pter[], boolean trav[]) {
        if (trav[i])
            return pter[i];
        trav[i] = true;
        for (int j : g[i])
            if (!find(g, j, pter, trav))
                return false;
        pter[i] = true;
        return true;
    }
}
