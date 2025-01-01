class Solution {
    private int abs(int i) {
        return i < 0 ? -i : i;
    }

    private int max(int i, int j) {
        return i > j ? i : j;
    }

    private long count(int n) {
        return (n * 1L * (n + 1)) / 2;
    }

    public long continuousSubarrays(int[] nums) {
        long total = 0;
        int n = nums.length;
        int min = nums[0], max = nums[0], s = 0, si = 0, bi = 0;
        for (int i = 1; i < n;) {
            if (abs(nums[i] - min) <= 2 && abs(nums[i] - max) <= 2) {
                if (min >= nums[i]) {
                    min = nums[i];
                    si = i;
                }
                if (max <= nums[i]) {
                    max = nums[i];
                    bi = i;
                }
                ++i;
            } else {
                int t = i;
                if (abs(nums[i] - min) > 2) {
                    if (abs(nums[i] - max) > 2)
                        i = max(si, bi);
                    else
                        i = si;
                } else
                    i = bi;
                ++i;
                total += count(t - s) - count(t - i);
                s = si = bi = i;
                min = max = nums[i];
            }
        }
        return total + count(n - s);
    }

}
