int maxScoreSightseeingPair(int* val, int n) {
    int p = 0, max = -1;
    for (int i = 1; i < n; i++) {
        int t = val[p] + val[i] + p - i;
        if (t > max)
            max = t;
        if (2 * val[i] >= t)
            p = i;
    }
    return max;
}
