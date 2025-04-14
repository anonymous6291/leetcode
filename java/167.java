class Solution {
    public int[] twoSum(int[] n, int t) {
        int s = 0, e = n.length - 1;
        while (s < e) {
            if (n[s] + n[e] == t)
                return new int[] { s + 1, e + 1 };
            if (n[s] + n[e] < t)
                s++;
            else
                e--;
        }
        return null;
    }
}
