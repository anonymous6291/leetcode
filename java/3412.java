class Solution {
    public long calculateScore(String s) {
        int n = s.length();
        int stack[][] = new int[26][n];
        int ind[] = new int[26];
        long sum = 0;
        for (int i = 0; i < n; i++) {
            int t1 = s.charAt(i) - 97;
            int t2 = 25 - t1;
            if (ind[t2] == 0)
                stack[t1][ind[t1]++] = i;
            else
                sum += i - stack[t2][--ind[t2]];
        }
        return sum;
    }
}
