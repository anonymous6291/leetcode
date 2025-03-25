class Solution {
    public long zeroFilledSubarray(int[] nums) {
        int count = 0;
        long sac = 0;
        for (int i : nums)
            if (i == 0)
                sac += ++count;
            else
                count = 0;
        return sac;
    }
}
