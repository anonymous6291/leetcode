class Solution {
    public int[] applyOperations(int[] nums) {
        int n = nums.length - 1;
        int res[] = new int[n + 1];
        int s = 0, i = 0;
        while (i <= n)
            if (i < n && nums[i] != 0 && nums[i] == nums[i + 1]) {
                res[s++] = nums[i] * 2;
                i += 2;
            } else {
                if (nums[i] != 0)
                    res[s++] = nums[i];
                i++;
            }
        return res;
    }
}
