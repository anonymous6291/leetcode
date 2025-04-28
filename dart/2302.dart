class Solution {
    int countSubarrays(List<int> n, int k) {
        int c = 0, s = 0, l = n.length, p = -1;
        for (int i = 0; i < l; i++) {
            s += n[i];
            while ((s * (i - p)) >= k)
                s -= n[++p];
            c += i - p;
        }
        return c;
    }
}
