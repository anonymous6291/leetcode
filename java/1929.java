class Solution {
    public int[] getConcatenation(int[] nums) {
        int n = nums.length;
        int res[] = new int[2 * n];
        System.arraycopy(nums, 0, res, 0, n);
        System.arraycopy(nums, 0, res, n, n);
        return res;
    }
}
