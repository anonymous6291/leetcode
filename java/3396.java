class Solution {
    public int minimumOperations(int[] nums) {
        boolean f[] = new boolean[101];
        for (int i = nums.length - 1; i >= 0; i--)
            if (f[nums[i]])
                return i / 3 + 1;
            else
                f[nums[i]] = true;
        return 0;
    }
}
