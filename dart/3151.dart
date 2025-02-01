class Solution {
    bool isArraySpecial(List<int> nums) {
        int p = (nums[0] & 1) ^ 1;
        for (int i in nums) {
            if ((i & 1) == p)
                return false;
            p ^= 1;
        }
        return true;
    }
}
