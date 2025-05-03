class Solution {
    int min(int a, int b){
        return (a < b) ? a : b;
    }

    int max(int a, int b){
        return (a > b) ? a : b;
    }

    int find(List<int> t, List<int> b, int v) {
        int ts = 0, bs = 0, n = t.length;
        for (int i = 0; i < n; i++) {
            if (t[i] == v)
                ts++;
            if (b[i] == v)
                bs++;
            else if (t[i] != v)
                return -1;
        }
        return min(min(ts, bs), n - max(ts, bs));
    }

    int minDominoRotations(List<int> t, List<int> b) {
        int r = t.length;
        for (int i = 1; i < 7; i++) {
            int v = find(t, b, i);
            if (v != -1)
                r = min(r, v);
        }
        if (r == t.length)
            return -1;
        return r;
    }
}
