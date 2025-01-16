class Solution {
    public int xorAllNums(int[] n1, int[] n2) {
        int res = 0;
        if (n1.length % 2 != 0)
            for (int i : n2)
                res ^= i;
        if (n2.length % 2 != 0)
            for (int i : n1)
                res ^= i;
        return res;
    }
}
