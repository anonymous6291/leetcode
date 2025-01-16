class Solution {
    int xorAllNums(List<int> n1, List<int> n2) {
        int res = 0;
        if (n1.length % 2 != 0)
            for (int i in n2)
                res ^= i;
        if (n2.length % 2 != 0)
            for (int i in n1)
                res ^= i;
        return res;
    }
}
