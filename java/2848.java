class Solution {
    public int numberOfPoints(List<List<Integer>> n) {
        int c[] = new int[102];
        for (List<Integer> l : n) {
            c[l.get(0)] += 1;
            c[l.get(1) + 1] -= 1;
        }
        int p = 0, s = 0;
        for (int i = 0; i < 101; i++) {
            s += c[i];
            if (s != 0)
                p++;
        }
        return p;
    }
}
