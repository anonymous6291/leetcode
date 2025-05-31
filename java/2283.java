class Solution {
    public boolean digitCount(String n) {
        int f[] = new int[10];
        int l = n.length();
        for (int i = 0; i < l; i++)
            f[n.charAt(i) - '0']++;
        for (int i = 0; i < l; i++)
            if (f[i] != n.charAt(i) - '0')
                return false;
        return true;
    }
}
