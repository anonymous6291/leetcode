class Solution {
    public int findSpecialInteger(int[] a) {
        int l = a.length, f = l / 4;
        for (int i = 0; i < l; i++)
            if (a[i] == a[i + f])
                return a[i];
        return -1;
    }
}
