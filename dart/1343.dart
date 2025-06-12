class Solution {
    int numOfSubarrays(List<int> n, int k, int t) {
        int l = n.length, p = 0, c = 0;
        t *= k;
        for (int i = 0; i < k; i++)
            p += n[i];
        if (p >= t)
            c++;
        for (int i = k; i < l; i++) {
            p = p - n[i - k] + n[i];
            if (p >= t)
                c++;
        }
        return c;
    }
}
