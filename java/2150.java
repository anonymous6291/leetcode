class Solution {
    public List<Integer> findLonely(int[] nums) {
        Arrays.sort(nums);
        List<Integer> list = new ArrayList<>();
        int n = nums.length, p = -1;
        for (int i = 0; i < n; i++) {
            if (p < nums[i] && (i == n - 1 || nums[i] + 1 < nums[i + 1]))
                list.add(nums[i]);
            p = nums[i] + 1;
        }
        return list;
    }
}
