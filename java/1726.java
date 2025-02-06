class Solution {
    public int tupleSameProduct(int[] nums) {
        int total = 0, n = nums.length;
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++) {
                int t = nums[i] * nums[j];
                int r = map.getOrDefault(t, 0);
                total += r * 8;
                map.put(t, r + 1);
            }
        return total;
    }
}
