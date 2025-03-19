class Solution {
    int minOperations(List<int> nums) {
        int i = 3, px = nums[0] | (nums[1] << 1) | (nums[2] << 2), n = nums.length, c = 0;
        while (i < n) {
            if ((px & 1) == 0) {
                px ^= 7;
                c++;
            }
            px = (px >> 1) | (nums[i] << 2);
            i++;
        }
        if (px == 0)
            return c + 1;
        if (px == 7)
            return c;
        return -1;
    }
}
