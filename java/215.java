class Solution {
    public int findKthLargest(int[] nums, int k) {
        int f[] = new int[20001];
        for (int i : nums)
            f[i + 10000]++;
        for (int i = 20000; i >= 0; i--) {
            k -= f[i];
            if (k <= 0)
                return i - 10000;
        }
        return 0;
    }
}
