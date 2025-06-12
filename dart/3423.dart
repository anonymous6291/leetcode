class Solution {
    int max(int x, int y){
        return (x > y) ? x : y;
    }

    int abs(int x){
        return (x < 0) ? -x : x;
    }

    int maxAdjacentDistance(List<int> n) {
        int l = n.length, m = abs(n[0] - n[l - 1]);
        for (int i = 1; i < l; i++)
            m = max(m, abs(n[i] - n[i - 1]));
        return m;
    }
}
