class Solution {
    bool isPAS(String w1, String w2) {
        return w2.startsWith(w1) && w2.endsWith(w1);
    }

    int countPrefixSuffixPairs(List<String> w) {
        int count = 0;
        int n = w.length;
        for (int i = 1; i < n; i++)
            for (int j = 0; j < i; j++)
                if (isPAS(w[j], w[i]))
                    count += 1;
        return count;
    }
}
