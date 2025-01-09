class Solution {
    int prefixCount(List<String> w, String p) {
        int count = 0;
        for (String s in w)
            if (s.startsWith(p))
                ++count;
        return count;
    }
}
