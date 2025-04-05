class Solution {
    public int longestOnes(int[] nums, int k) {
        int n = nums.length, c = 0, p = 0, mc = 0, i = 0;
        while (i < n) {
            c += nums[i++] ^ 1;
            while (i < n && c < k)
                c += nums[i++] ^ 1;
            while (c > k)
                c -= nums[p++] ^ 1;
            if (i - p >= mc)
                mc = i - p;
        }
        return mc;
    }
}
