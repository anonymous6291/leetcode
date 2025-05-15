class Solution {
    List<String> getLongestSubsequence(List<String> w, List<int> g) {
        List<String> r = [];
        r.add(w[0]);
        int n = w.length;
        for (int i = 1; i < n; i++)
            if (g[i - 1] != g[i])
                r.add(w[i]);
        return r;
    }
}
