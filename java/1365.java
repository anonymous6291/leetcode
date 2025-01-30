class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int n = nums.length;
        int f[] = new int[101];
        for (int i : nums)
            ++f[i];
        int ps = 0;
        for (int i = 0; i < 101; i++) {
            ps += f[i];
            f[i] = ps - f[i];
        }
        for (int i = 0; i < n; i++)
            nums[i] = f[nums[i]];
        return nums;
    }
}
