class Solution {
    int zeroFilledSubarray(List<int> nums) {
        int count = 0, sac = 0;
        for (int i in nums)
            if (i == 0)
                sac += ++count;
            else
                count = 0;
        return sac;
    }
}
