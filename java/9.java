class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0)
            return false;
        int v = x, r = 0;
        while (v > 0) {
            r = r * 10 + (v % 10);
            v /= 10;
        }
        return x == r;
    }
}
