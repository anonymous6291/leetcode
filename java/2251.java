class Solution {
    public int[] fullBloomFlowers(int[][] f, int[] p) {
        int n1 = p.length, n2 = f.length, fb = 0, j = 0;
        int res[] = new int[n1];
        int si[] = new int[n2];
        int ei[] = new int[n2];
        for (int i[] : f) {
            si[j] = i[0];
            ei[j++] = i[1];
        }
        Arrays.sort(si);
        Arrays.sort(ei);
        j = 0;
        int ps[][] = new int[n1][];
        for (int i = 0; i < n1; i++)
            ps[i] = new int[] { p[i], i };
        Arrays.sort(ps, (a, b) -> a[0] - b[0]);
        for (int i = 0, k = 0; i < n1; i++) {
            while (j < n2 && si[j] <= ps[i][0]) {
                fb++;
                j++;
            }
            while (k < n2 && ei[k] < ps[i][0]) {
                k++;
                fb--;
            }
            res[ps[i][1]] = fb;
        }
        return res;
    }
}
