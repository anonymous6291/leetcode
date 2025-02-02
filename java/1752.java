class Solution {
    public boolean check(int[] nums) {
        int n = nums.length;
        boolean df = false;
        for (int i = 1; i < n; i++)
            if (nums[i - 1] > nums[i]) {
                if (df)
                    return false;
                df = true;
            }
        return (nums[0] >= nums[n - 1] || !df);
    }
}
