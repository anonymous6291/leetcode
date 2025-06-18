class Solution {
    List<List<int>> divideArray(List<int> n, int k) {
        int l = n.length;
        n.sort();
        List<List<int>> r = [];
        for (int i = 0, j = 0; i < l; i += 3, j++) {
            if (n[i + 2] - n[i] > k)
                return [];
            r.add([ n[i], n[i + 1], n[i + 2] ]);
        }
        return r;
    }
}
