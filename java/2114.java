class Solution {
    public int mostWordsFound(String[] sen) {
        int max = 1;
        for (String s : sen) {
            int cc = 1;
            for (char c : s.toCharArray())
                if (c == ' ')
                    ++cc;
            max = Math.max(max, cc);
        }
        return max;
    }
}
