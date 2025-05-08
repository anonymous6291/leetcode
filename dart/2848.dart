class Solution {
    int numberOfPoints(List<List<int>> n) {
        List<int> c = [];
        for (int i = 0; i < 102; i++) {
            c.add(0);
        }
        for (List<int> l in n) {
            c[l[0]] += 1;
            c[l[1] + 1] -= 1;
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
