class Solution {
    int max(int x, int y){
        return x > y ? x : y;
    }

    double findMaxAverage(List<int> n, int k) {
        int l = n.length, s = 0;
        for (int i = 0; i < k; i++)
            s += n[i];
        int m = s;
        for (int i = k; i < l; i++) {
            s = s - n[i - k] + n[i];
            m = max(m, s);
        }
        return m / k;
    }
}
