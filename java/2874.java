class Solution {
    public long maximumTripletValue(int[] nums) {
        long res = 0, diff = 0;
        int i = 0;
        for (int j : nums) {
            res = Math.max(res, diff * j);
            diff = Math.max(diff, i - j);
            if (j > i)
                i = j;
        }
        return res;
    }
}
