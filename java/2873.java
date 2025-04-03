class Solution {
    public long maximumTripletValue(int[] nums) {
        long res = 0, diff = 0;
        int i = 0, n = nums.length;
        for (int j = 0; j < n; j++) {
            res = Math.max(res, diff * nums[j]);
            diff = Math.max(diff, i - nums[j]);
            if (nums[j] > i)
                i = nums[j];
        }
        return res;
    }
}
