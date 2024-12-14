class Solution {
    public long continuousSubarrays(int[] nums) {
        long total = 0;
        int n = nums.length;
        int min = nums[0], max = nums[0], s = 0, si = 0, bi = 0;
        for (int i = 1; i < n; i++) {
            if (Math.abs(nums[i] - min) <= 2 && Math.abs(nums[i] - max) <= 2) {
                if (min >= nums[i]) {
                    min = nums[i];
                    si = i;
                }
                if (max <= nums[i]) {
                    max = nums[i];
                    bi = i;
                }
            } else {
                total += count(i - s);
                int t = i;
                if (Math.abs(nums[i] - min) > 2) {
                    if (Math.abs(nums[i] - max) > 2) {
                        i = Math.max(si, bi);
                    } else {
                        i = si;
                    }
                } else {
                    i = bi;
                }
                total -= count(t - i - 1);
                s = si = bi = i + 1;
                min = max = nums[i + 1];
            }
        }
        return total + count(n - s);
    }

    private long count(long n) {
        return (n * (n + 1)) / 2;
    }
}
