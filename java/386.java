class Solution {
    private void find(int i, List<Integer> l, int n) {
        for (int j = 0; j < 10; j++, i++) {
            if (i > n)
                return;
            l.add(i);
            find(i * 10, l, n);
        }
    }

    public List<Integer> lexicalOrder(int n) {
        List<Integer> l = new ArrayList<>();
        int e = Math.min(9, n);
        for (int s = 1; s <= e; s++) {
            l.add(s);
            find(s * 10, l, n);
        }
        return l;
    }
}
