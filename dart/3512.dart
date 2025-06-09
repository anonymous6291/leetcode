class Solution {
    int minOperations(List<int> n, int k) {
        int s = 0;
        for (int i in n)
            s += i;
        return s % k;
    }
}
