class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length(), p = 0, l = 0, m[] = new int[128];
        Arrays.fill(m, -1);
        for (int i = 0; i < n; i++) {
            p = Math.max(p, m[s.charAt(i)] + 1);
            m[s.charAt(i)] = i;
            l = Math.max(l, i - p + 1);
        }
        return l;
    }
}
