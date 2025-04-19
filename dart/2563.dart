class Solution {
    int countFairPairs(List<int> n, int l, int u) {
        n.sort();
        return find(n, u) - find(n, l - 1);
    }

    int find(List<int> n, int u) {
        int s = 0, e = n.length - 1;
        int r = 0;
        while (s < e) {
            if (n[s] + n[e] > u)
                e--;
            else {
                r += e - s;
                s++;
            }
        }
        return r;
    }
}
