/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
int** mergeArrays(int** nums1, int n1, int* nc1, int** nums2, int n2, int* nc2,
                  int* rs, int** rcs) {
    bool f[1001] = {false};
    int i, j = 0, u = 0;
    for (i = 0; i < n1; i++)
        if (!f[nums1[i][0]]) {
            f[nums1[i][0]] = true;
            u++;
        }
    for (i = 0; i < n2; i++)
        if (!f[nums2[i][0]]) {
            f[nums2[i][0]] = true;
            u++;
        }
    *rs = u;
    int* temp = (int*)malloc(sizeof(int) * u);
    int** res = (int**)malloc(sizeof(int*) * u);
    for (i = 0; i < u; i++) {
        res[i] = (int*)malloc(sizeof(int) * 2);
        temp[i] = 2;
    }
    *rcs = temp;
    i = 0;
    u = 0;
    while (i < n1 || j < n2) {
        if (i == n1 || (j < n2 && nums1[i][0] > nums2[j][0])) {
            res[u][0] = nums2[j][0];
            res[u++][1] = nums2[j++][1];
        } else if (j == n2 || nums1[i][0] < nums2[j][0]) {
            res[u][0] = nums1[i][0];
            res[u++][1] = nums1[i++][1];
        } else {
            res[u][0] = nums1[i][0];
            res[u++][1] = nums1[i++][1] + nums2[j++][1];
        }
    }
    return res;
}
