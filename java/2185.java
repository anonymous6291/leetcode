class Solution {
    public int prefixCount(String[] w, String p) {
        int count = 0;
        for (String s : w)
            if (s.startsWith(p))
                ++count;
        return count;
    }
}
