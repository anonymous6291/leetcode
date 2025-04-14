class Solution {
    List<int> twoSum(List<int> n, int t) {
        int s = 0, e = n.length - 1;
        while (s < e) {
            int y = n[s] + n[e];
            if (y == t)
                return [ s + 1, e + 1 ];
            if (y < t)
                s++;
            else
                e--;
        }
        return [];
    }
}
