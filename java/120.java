class Solution {
    public int minimumTotal(List<List<Integer>> tri) {
        int n = tri.size(), ps = 0;
        int mins[] = new int[n];
        return find(tri, 0, 0, mins);
    }

    private int find(List<List<Integer>> tri, int i, int j, int mins[]) {
        if (i == tri.size() - 1)
            return tri.get(i).get(j);
        int m1 = (j != 0) ? (mins[i + 1]) : (find(tri, i + 1, j, mins));
        int m2 = find(tri, i + 1, j + 1, mins);
        mins[i + 1] = m2;
        return Math.min(m1, m2) + tri.get(i).get(j);
    }
}
