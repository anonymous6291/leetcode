class Solution {
  List<int> finalPrices(List<int> p) {
    int n = p.length;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (p[j] <= p[i]) {
                p[i] -= p[j];
                break;
            }
    return p;
  }
}
