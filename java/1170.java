class Solution {
    private int f(String s) {
        int n = s.length();
        int freq[] = new int[26];
        for (int i = 0; i < n; i++)
            freq[s.charAt(i) - 'a']++;
        for (int i = 0; i < 26; i++)
            if (freq[i] != 0)
                return freq[i];
        return 0;
    }

    public int[] numSmallerByFrequency(String[] q, String[] w) {
        int n = q.length;
        int freq[] = new int[12];
        for (String s : w) {
            int t = f(s);
            while (t >= 0)
                freq[t--]++;
        }
        int res[] = new int[n];
        for (int i = 0; i < n; i++)
            res[i] = freq[f(q[i]) + 1];
        return res;
    }
}
