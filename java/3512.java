class Solution {
    public int minOperations(int[] n, int k) {
        int s = 0;
        for (int i : n)
            s += i;
        return s % k;
    }
}
