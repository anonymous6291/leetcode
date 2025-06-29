class Solution {
    public boolean isBalanced(String n) {
        int l = n.length(), b = 0;
        for (int i = 0; i < l; i += 2)
            b += n.charAt(i) - 48;
        for (int i = 1; i < l; i += 2)
            b -= n.charAt(i) - 48;
        return b == 0;
    }
}
