class Solution {
    private int f(int i) {
        int v = 1;
        while (2 * v < i)
            v *= 2;
        return v;
    }

    public char kthCharacter(int k) {
        if (k == 1)
            return 'a';
        return (char) (kthCharacter(k - f(k)) + 1);
    }
}
