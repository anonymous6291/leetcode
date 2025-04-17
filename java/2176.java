class Solution {
    public int countPairs(int[] nums, int k) {
        int n = nums.length, c = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < i; j++)
                if (nums[i] == nums[j] && (i * j) % k == 0)
                    c++;
        return c;
    }
}
