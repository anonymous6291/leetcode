class Solution {
    int findMiddleIndex(List<int> nums) {
        int ss = 0, ps = 0, n = nums.length;
        for (int i in nums)
            ss += i;
        for (int i = 0; i < n; i++) {
            ss -= nums[i];
            if (ps == ss)
                return i;
            ps += nums[i];
        }
        return -1;
    }
}
