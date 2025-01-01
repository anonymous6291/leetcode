import java.util.Arrays;

class Solution {
    public long findScore(int[] nums) {
        int n = nums.length;
        boolean marked[] = new boolean[n];
        int p[][] = new int[n][];
        for (int i = 0; i < n; i++)
            p[i] = new int[] { nums[i], i };
        Arrays.sort(p, (a1, b1) -> {
            int a[] = (int[]) a1;
            int b[] = (int[]) b1;
            if (a[0] == b[0])
                return a[1] - b[1];
            return a[0] - b[0];
        });
        long res = 0;
        for (int j = 0; j < n; j++) {
            int i[] = p[j];
            if (!marked[i[1]]) {
                res += i[0];
                if (i[1] + 1 < n)
                    marked[i[1] + 1] = true;
                if (i[1] - 1 >= 0)
                    marked[i[1] - 1] = true;
            }
        }
        return res;
    }
}
