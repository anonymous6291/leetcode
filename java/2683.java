class Solution {
    public boolean doesValidArrayExist(int[] d) {
        int res = 0;
        for (int i : d)
            res ^= i;
        return res == 0;
    }
}
