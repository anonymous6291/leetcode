class Solution {
    bool check(List<int> nums) {
        int n = nums.length;
        bool df = false;
        for (int i = 1; i < n; i++)
            if (nums[i - 1] > nums[i]) {
                if (df)
                    return false;
                df = true;
            }
        return (nums[0] >= nums[n - 1] || !df);
    }
}
