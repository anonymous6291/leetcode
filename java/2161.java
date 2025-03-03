class Solution {
    public int[] pivotArray(int[] nums, int p) {
        int s = 0, e = nums.length;
        int res[] = new int[e];
        for (int i = 0; i < e; i++)
            if (nums[i] < p)
                res[s++] = nums[i];
        for (int i = --e; i >= 0; i--)
            if (nums[i] > p)
                res[e--] = nums[i];
        while (s <= e)
            res[s++] = p;
        return res;
    }
}
