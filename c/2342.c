#define MAX(a, b) ((a > b) ? a : b)

int maximumSum(int* nums, int n) {
    int m1[82] = {0};
    int m2[82] = {0};
    int ms = -1;
    for (int j = 0; j < n; j++) {
        int s = 0, i = nums[j], t = i;
        while (t > 0) {
            s += t % 10;
            t /= 10;
        }
        if (m1[s] < i) {
            m2[s] = m1[s];
            m1[s] = i;
            if (m2[s] != 0)
                ms = MAX(ms, m1[s] + m2[s]);
        } else if (m2[s] < i) {
            m2[s] = i;
            ms = MAX(ms, m1[s] + m2[s]);
        }
    }
    return ms;
}
