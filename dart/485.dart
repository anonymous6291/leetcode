class Solution {
    int findMaxConsecutiveOnes(List<int> nums) {
        int m = 0, c = 0;
        for (int i in nums)
            if (i == 1)
                c++;
            else {
                m = m > c ? m : c;
                c = 0;
            }
        return (m > c ? m : c);
    }
}
