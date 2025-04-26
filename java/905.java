class Solution {
    public int[] sortArrayByParity(int[] n) {
        int s = 0, e = n.length - 1;
        while (s < e) {
            while (s < e && (n[s] & 1) == 0)
                s++;
            while (s < e && (n[e] & 1) == 1)
                e--;
            int t = n[s];
            n[s] = n[e];
            n[e] = t;
        }
        return n;
    }
}
