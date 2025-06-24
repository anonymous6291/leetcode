class Solution {
    int abs(int x) {
        return x < 0 ? -x : x;
    }

    List<int> findKDistantIndices(List<int> n, int v, int d) {
        int l = n.length, k = 0;
        List<int> s = [];
        List<int> r = [];
        for (int j = 0; j < l; j++)
            if (n[j] == v)
                s.add(j);
        int i = s.length;
        for (int j = 0; j < l; j++) {
            if (k == i)
                return r;
            if (s[k] < j && j - s[k] > d)
                k++;
            if (k < i && abs(j - s[k]) <= d)
                r.add(j);
        }
        return r;
    }
}
