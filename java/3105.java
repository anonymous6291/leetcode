class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        int ic = 1, dc = 1, ml = 1, n = nums.length;
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] < nums[i]) {
                ic++;
                dc = 1;
            } else if (nums[i - 1] > nums[i]) {
                ic = 1;
                dc++;
            } else {
                ic = 1;
                dc = 1;
            }
            ml = Math.max(Math.max(ic, dc), ml);
        }
        return ml;
    }
}
