class Solution {

    int max(int i, int j){
        return (i > j) ? i : j;
    }

    int maxAscendingSum(List<int> nums) {
        int s = nums[0], n = nums.length, ms = nums[0];
        for (int i = 1; i < n; i++) {
            s = nums[i] + ((nums[i - 1] < nums[i]) ? s : 0);
            ms = max(ms, s);
        }
        return ms;
    }
}
