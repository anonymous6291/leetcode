class Solution {
    public long countGood(int[] nums, int k) {
        Map<Integer, Integer> m = new HashMap<>();
        long count = 0;
        int s = 0, f = 0, n = nums.length;
        for (int i = 0; i < n; i++) {
            f += m.compute(nums[i], (a, b) -> b == null ? 1 : (b + 1)) - 1;
            int t = s;
            while (f >= k) {
                f -= m.compute(nums[t++], (a, b) -> b - 1);
                if (f < k)
                    count += (n - i + 0L) * (t - s);
            }
            s = t;
        }
        return count;
    }
}
