class Solution {
    int maximumTripletValue(List<int> nums) {
        int i = 0, res = 0, diff = 0;
        for (int j in nums) {
            res = max(res, diff * j);
            diff = max(diff, i - j);
            if (j > i)
                i = j;
        }
        return res;
    }
}
