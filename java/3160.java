class Solution {
    public int[] queryResults(int l, int[][] q) {
        int n = q.length;
        int res[] = new int[n];
        Map<Integer, Integer> m1 = new HashMap<>();
        Map<Integer, Integer> m2 = new HashMap<>();
        for (int i = 0; i < n; i++) {
            int a = q[i][0], b = q[i][1];
            Integer r1 = m1.get(a);
            if (r1 == null || r1 != b) {
                if (r1 != null) {
                    int r2 = m2.get(r1);
                    if (r2 > 1)
                        m2.put(r1, r2 - 1);
                    else
                        m2.remove(r1);
                }
                m1.put(a, b);
                m2.put(b, m2.getOrDefault(b, 0) + 1);
            }
            res[i] = m2.size();
        }
        return res;
    }
}
