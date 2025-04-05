class Solution {
    public int maxVowels(String s, int k) {
        int v[] = new int[26];
        v[0] = v[4] = v[8] = v[14] = v[20] = 1;
        char c[] = s.toCharArray();
        int vc = 0, n = c.length;
        for (int i = 0; i < k; i++)
            vc += v[c[i] - 97];
        int mvc = vc;
        for (int i = k; i < n; i++) {
            vc += v[c[i] - 97] - v[c[i - k] - 97];
            if (vc > mvc)
                mvc = vc;
        }
        return mvc;
    }
}
