class Solution {
    public int[] productExceptSelf(int[] n) {
        int l = n.length, o = -1, p = 1;
        int r[] = new int[l];
        for (int i = 0; i < l; i++)
            if (n[i] == 0) {
                if (o != -1)
                    return r;
                o = i;
            } else
                p *= n[i];
        if (o != -1) {
            r[o] = p;
            return r;
        }
        for (int i = 0; i < l; i++)
            r[i] = p / n[i];
        return r;
    }
}
