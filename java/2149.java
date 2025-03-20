class Solution {
    public int[] rearrangeArray(int[] nums) {
        int l = nums.length, res[] = new int[l];
        for (int i = 0, n = 1, p = 0; i < l; i++) {
            if (nums[i] < 0) {
                res[n] = nums[i];
                n += 2;
            } else {
                res[p] = nums[i];
                p += 2;
            }
        }
        return res;
    }
}
