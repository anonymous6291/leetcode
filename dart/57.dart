class Solution {
    bool intersect(List<int> i, List<int> j) {
        if (i[0] > j[0])
            return intersect(j, i);
        return i[1] >= j[0];
    }

    int max(int x, int y){
        return (x > y) ? x : y;
    }

    int min(int x, int y){
        return (x < y) ? x : y;
    }

  List<List<int>> insert(List<List<int>> i, List<int> j) {
        int n = i.length, m = 0;
        bool d = false;
        for (int k = 0; k < n; k++) {
            if (intersect(i[k], j)) {
                int s = min(i[k][0], j[0]);
                while (k < n && i[k][0] <= j[1])
                    k++;
                i[m++] = [ s, max(i[--k][1], j[1]) ];
                d = true;
            } else
                i[m++] = i[k];
        }
        if (!d) {
            List<List<int>> r = [];
            for (int k = 0; k < n;) {
                if (!d && i[k][0] > j[0]) {
                    r.add(j);
                    d = true;
                } else
                    r.add(i[k++]);
            }
            if (!d)
                r.add(j);
            return r;
        }
        List<List<int>> r = [];
        for (int k = 0; k < m; k++)
            r.add(i[k]);
        return r;
  }
}
