class Solution {
    int max(int x, int y){
        return x > y ? x : y;
    }
    
    List<bool> kidsWithCandies(List<int> c, int e) {
        int m = -1, n = c.length;
        for (int i = 0; i < n; i++)
            m = max(m, c[i]);
        List<bool> l = [];
        for (int i = 0; i < n; i++)
            l.add((c[i] + e) >= m);
        return l;
    }
}
