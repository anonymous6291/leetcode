class Solution {
    public List<String> stringMatching(String[] w) {
        List<String> res = new ArrayList<>();
        int n = w.length;
        for (int i = 0; i < n; i++)
            if (isSub(w, w[i], i, n))
                res.add(w[i]);
        return res;
    }

    private boolean isSub(String w[], String t, int i, int n) {
        for (int j = 0; j < n; j++)
            if (i != j && w[j].contains(w[i]))
                return true;
        return false;
    }
}
