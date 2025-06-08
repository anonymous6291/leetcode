class Solution {
    void find(int i, List<int> l, int n) {
        for (int j = 0; j < 10; j++, i++) {
            if (i > n)
                return;
            l.add(i);
            find(i * 10, l, n);
        }
    }

    List<int> lexicalOrder(int n) {
        List<int> l = [];
        int e = n > 9 ? 9 : n;
        for (int s = 1; s <= e; s++) {
            l.add(s);
            find(s * 10, l, n);
        }
        return l;
    }
}
