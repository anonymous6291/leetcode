class Solution {
    public int minimumLength(String s) {
        int f[] = new int[26];
        for (byte c : s.getBytes())
            f[c - 97] += 1;
        int count = 0;
        for (int i : f) {
            if (i == 0)
                continue;
            count += (i & 1 ^ 1) << 1 | i & 1;
        }
        return count;
    }
}
