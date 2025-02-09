class Solution {
    public long countBadPairs(int[] nums) {
        int n = nums.length;
        Map<Integer, Integer> m = new HashMap<>();
        long count = 0;
        for (int i = 0; i < n; i++)
            count += i - m.compute(i - nums[i], (a, b) -> (b == null) ? 1 : (b + 1)) + 1;
        return count;
    }
}
