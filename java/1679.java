class Solution {
    public int maxOperations(int[] nums, int k) {
        Arrays.sort(nums);
        int s = 0, e = nums.length - 1, count = 0;
        while (s < e) {
            int t = nums[s] + nums[e];
            if (t == k) {
                count++;
                s++;
                e--;
            } else if (t < k)
                s++;
            else
                e--;
        }
        return count;
    }
}
