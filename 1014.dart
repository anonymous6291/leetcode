class Solution {
  int maxScoreSightseeingPair(List<int> val) {
    int p = 0, n = val.length, max = -1;
    for (int i = 1; i < n; i++) {
        int t = val[p] + val[i] + p - i;
        if (t > max)
            max = t;
        if (2 * val[i] >= t)
             p = i;
    }
    return max;
  }
}
