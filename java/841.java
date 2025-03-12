class Solution {
    private void dfs(List<List<Integer>> r, int i, boolean trav[]) {
        if (trav[i])
            return;
        trav[i] = true;
        for (int j : r.get(i))
            dfs(r, j, trav);
    }

    public boolean canVisitAllRooms(List<List<Integer>> r) {
        int n = r.size();
        boolean trav[] = new boolean[n];
        dfs(r, 0, trav);
        for (boolean b : trav)
            if (!b)
                return false;
        return true;
    }
}
