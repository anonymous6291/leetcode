class Solution {
    int countSubarrays(List<int> n, int k) {
        int m = n[0], p = 0, c = 0, l = n.length, t = 0;
        for (int i in n)
            if (i > m)
                m = i;
        for (int i = 0; i < l; i++) {
            if (m == n[i])
                c++;
            if (c == k) {
                int x = p;
                while (c == k)
                    if (m == n[p++])
                        c--;
                t += (p - x) * (l - i);
            }
        }
        return t;
    }
}
