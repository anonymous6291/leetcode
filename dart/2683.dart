class Solution {
    bool doesValidArrayExist(List<int> d) {
        int res = 0;
        for (int i in d)
            res ^= i;
        return res == 0;
    }
}
