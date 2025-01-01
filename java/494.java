class Solution {
    public int findTargetSumWays(int[] nums, int t) {
        Arrays.sort(nums);
        return find(nums, 0, nums.length, 0, t);
    }

    private int find(int nums[], int i, int n, int t, int tar) {
        if (i == n)
            return (t == tar) ? 1 : 0;
        return find(nums, i + 1, n, t - nums[i], tar) + find(nums, i + 1, n, t + nums[i], tar);
    }
}
