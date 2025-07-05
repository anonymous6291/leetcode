class Solution {
    int numberOfCuts(int n) {
        if (n == 1)
            return 0;
        return (n % 2 == 0) ? n >> 1 : n;
    }
}
