class Solution {
    private boolean isPAS(String w1, String w2) {
        int n1 = w1.length(), n2 = w2.length();
        if (n1 > n2)
            return false;
        n2 -= n1;
        for (int i = 0; i < n1; i++)
            if (w1.charAt(i) != w2.charAt(i) || w1.charAt(i) != w2.charAt(n2 + i))
                return false;
        return true;
    }

    public int countPrefixSuffixPairs(String[] w) {
        int count = 0;
        int n = w.length;
        for (int i = 1; i < n; i++)
            for (int j = 0; j < i; j++)
                if (isPAS(w[j], w[i]))
                    ++count;
        return count;
    }
}
