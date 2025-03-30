class Solution {
    public List<Integer> partitionLabels(String s) {
        List<Integer> res = new ArrayList<>();
        int n = s.length();
        int pi[] = new int[26];
        for (int i = n - 1; i >= 0; i--) {
            int t = s.charAt(i) - 97;
            if (pi[t] == 0)
                pi[t] = i;
        }
        int pti = 0, cti = 0;
        for (int i = 0; i < n; i++) {
            if (cti < i) {
                res.add(cti - pti + 1);
                pti = i;
            }
            int t = pi[s.charAt(i) - 97];
            if (t > cti)
                cti = t;
        }
        res.add(cti - pti + 1);
        return res;
    }
}
