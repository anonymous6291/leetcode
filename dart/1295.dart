class Solution {
    int findNumbers(List<int> nums) {
        int c = 0;
        for (int i in nums)
            if ((i > 9 && i < 100) || (i > 999 && i < 10000) || i == 100000)
                c++;
        return c;
    }
}
