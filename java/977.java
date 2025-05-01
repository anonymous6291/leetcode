class Solution {
    public int[] sortedSquares(int[] n) {
        int l = n.length;
        int r[] = new int[l];
        int i = 0;
        while (i < l && n[i] < 0) {
            i++;
        }
        --i;
        int j = i + 1;
        for (int k = 0; k < l; k++)
            if (i >= 0) {
                if (j < l && n[i] * n[i] > n[j] * n[j])
                    r[k] = n[j] * n[j++];
                else
                    r[k] = n[i] * n[i--];
            } else
                r[k] = n[j] * n[j++];
        return r;
    }
}
