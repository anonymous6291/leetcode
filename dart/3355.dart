class Solution {
  bool isZeroArray(List<int> n, List<List<int>> q) {
        int l = n.length;
        List<int> r = [];
        for (int i = 0; i <= l; i++)
             r.add(0);
        for (List<int> i in q) {
            r[i[0]]++;
            r[i[1] + 1]--;
        }
        int p = 0;
        for (int i = 0; i < l; i++) {
            p += r[i];
            if (n[i] > p)
                return false;
        }
        return true;
  }
}
