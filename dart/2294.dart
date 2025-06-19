class Solution {
    int min(int x, int y){
        return x < y ? x : y;
    }

    int max(int x, int y){
        return x > y ? x : y;
    }

    int partitionArray(List<int> n, int k) {
        int s = n[0], e = n[0], p = 0, c = 0;
        for (int i in n) {
            s = min(s, i);
            e = max(e, i);
        }
        e = e - s + 1;
        List<bool> f = [];
        for (int i = 0; i < e; i++)
            f.add(false);
        for (int i in n)
            f[i - s] = true;
        for (int i = 0; i < e; i++)
            if (f[i] && i - p > k) {
                p = i;
                c++;
            }
        return c + 1;
    }
}
