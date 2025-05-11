class Solution {
    public boolean threeConsecutiveOdds(int[] a) {
        int n = a.length, c = 0;
        for (int i = 0; i < n; i++) {
            if ((a[i] & 1) == 1) {
                c++;
                if (c == 3)
                    return true;
            } else
                c = 0;
        }
        return false;
    }
}
