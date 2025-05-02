class Solution {
    public int maxOperations(int[] n) {
        int s = n[0] + n[1], l = n.length, c = 1;
        for (int i = 2; i + 1 < l; i += 2)
            if (n[i] + n[i + 1] != s)
                return c;
            else
                c++;
        return c;
    }
}
