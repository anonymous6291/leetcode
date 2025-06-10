class Solution {
    int max(int x, int y){
        return (x > y) ? x : y;
    }

    int min(int x, int y){
        return (x < y) ? x : y;
    }

    List<List<int>> merge(List<List<int>> j) {
        int k = 10001, m = 0;
        for (List<int> i in j) {
            k = min(k, min(i[0], i[1]));
            m = max(m, max(i[0], i[1]));
        }
        m -= k - 1;
        List<int> s = [], e = [];
        for(int i = 0; i < m; i++){
            s.add(0);
            e.add(0);
        }
        for (List<int> i in j) {
            s[i[0] - k]++;
            e[i[1] - k]++;
        }
        List<List<int>> l = [];
        int p = 0, x = -1;
        for (int i = 0; i < m; i++) {
            p += s[i];
            if (p > 0 && x == -1)
                x = i;
            p -= e[i];
            if (p == 0 && x != -1) {
                l.add([x + k, i + k]);
                x = -1;
            }
        }
        return l;
    }
}
