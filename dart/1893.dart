class Solution {
    bool isCovered(List<List<int>> j, int l, int r) {
        List<int> f = [];
        for (int i = 0; i < 52; i++)
            f.add(0);
        for (List<int> i in j) {
            f[i[0]]++;
            f[i[1] + 1]--;
        }
        int p = 0;
        for (int i = 0; i <= 51; i++) {
            p += f[i];
            if (i >= l && i <= r && p == 0)
                return false;
        }
        return true;
    }
}
