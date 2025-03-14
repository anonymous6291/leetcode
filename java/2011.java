class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int x = 0;
        for (String s : operations)
            x += (s.charAt(0) == '-' || s.charAt(2) == '-') ? -1 : 1;
        return x;
    }
}
