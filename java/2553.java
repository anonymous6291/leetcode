class Solution {
    public int[] separateDigits(int[] n) {
        int p = 0;
        for (int i : n)
            while (i > 0) {
                p++;
                i /= 10;
            }
        int r[] = new int[p];
        p = 0;
        for (int i : n) {
            int s = 1, t = i / 10;
            while (t > 0) {
                s *= 10;
                t /= 10;
            }
            while (s > 0) {
                r[p++] = i / s;
                i %= s;
                s /= 10;
            }
        }
        return r;
    }
}
