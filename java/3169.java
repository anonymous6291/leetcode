class Solution {
    public int countDays(int d, int[][] m) {
        Arrays.sort(m, (a, b) -> a[0] - b[0]);
        int p = 0, n = m.length, count = 0;
        for (int i[] : m) {
            if (p < i[0])
                count += i[0] - p - 1;
            if (p < i[1])
                p = i[1];
        }
        return count + d - p;
    }
}
