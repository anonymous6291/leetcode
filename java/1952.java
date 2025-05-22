class Solution {
    private boolean isPrime(int n) {
        int s = 2;
        while (s < n)
            if (n % s++ == 0)
                return false;
        return true;
    }

    public boolean isThree(int n) {
        if (n == 1)
            return false;
        int s = (int) Math.sqrt(n);
        return isPrime(s) && n == (s * s);
    }
}
