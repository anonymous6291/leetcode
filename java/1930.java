class Solution {
    public int countPalindromicSubsequence(String st) {
        int count = 0, s = 0, n = st.length();
        int c[] = new int[n];
        for (int i = 0; i < n; i++)
            c[i] = st.charAt(i) - 'a';
        boolean f[] = new boolean[26];
        while (s < n - 2) {
            f[c[s]] = true;
            count += find(c, s, n);
            while (s < n - 2 && f[c[s]])
                ++s;
        }
        return count;
    }

    private int find(int c[], int s, int n) {
        int e = n - 1;
        while (e > s + 1 && c[e] != c[s])
            --e;
        if (s + 1 == e)
            return 0;
        boolean un[] = new boolean[26];
        int count = 0;
        for (int i = s + 1; i < e; i++)
            if (!un[c[i]]) {
                un[c[i]] = true;
                ++count;
            }
        return count;
    }
}
