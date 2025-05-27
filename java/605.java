class Solution {
    public boolean canPlaceFlowers(int[] f, int n) {
        int l = f.length;
        for (int i = f[0] == 1 ? 2 : 0; i < l && n > 0; i++)
            if (f[i] == 0 && (i == l - 1 || f[i + 1] == 0)) {
                n--;
                i++;
            } else if (f[i] == 1)
                i++;
        return n == 0;
    }
}
