class Solution {
    public int[] findThePrefixCommonArray(int[] A, int[] B) {
        int n = A.length, p = 0;
        int C[] = new int[n];
        boolean F[] = new boolean[n + 1];
        for (int i = 0; i < n; i++) {
            if (F[A[i]])
                ++p;
            else
                F[A[i]] = true;
            if (F[B[i]])
                ++p;
            else
                F[B[i]] = true;
            C[i] = p;
        }
        return C;
    }
}
