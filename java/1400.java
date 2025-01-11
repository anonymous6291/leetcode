class Solution {
    public boolean canConstruct(String s, int k) {
        if (s.length() < k)
            return false;
        int f[] = new int[26];
        for (char c : s.toCharArray())
            f[c - 'a'] += 1;
        int j = k;
        for (int i : f)
            j -= i % 2;
        return j >= 0;
    }
}
