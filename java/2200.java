class Solution {
    private int abs(int x) {
        return x < 0 ? -x : x;
    }

    public List<Integer> findKDistantIndices(int[] n, int v, int d) {
        int l = n.length, s[] = new int[l], i = 0, k = 0;
        List<Integer> r = new ArrayList<>();
        for (int j = 0; j < l; j++)
            if (n[j] == v)
                s[i++] = j;
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
