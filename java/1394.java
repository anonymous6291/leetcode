class Solution {
    public int findLucky(int[] arr) {
        int f[] = new int[501];
        for (int i : arr)
            ++f[i];
        for (int i = 500; i >= 1; i--)
            if (i == f[i])
                return i;
        return -1;
    }
}
