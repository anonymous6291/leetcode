/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */

#define max(x, y) ((x > y) ? x : y)
#define min(x, y) ((x < y) ? x : y)

bool intersect(int* i, int* j) {
    if (i[0] > j[0])
        return intersect(j, i);
    return i[1] >= j[0];
}

int** insert(int** i, int n, int* w, int* j, int x, int* y, int** o) {
    int m = 0;
    bool d = false;
    for (int k = 0; k < n; k++) {
        if (intersect(i[k], j)) {
            int s = min(i[k][0], j[0]);
            while (k < n && i[k][0] <= j[1])
                k++;
            int* t = (int*)malloc(sizeof(int) * 2);
            t[0] = s;
            --k;
            t[1] = max(i[k][1], j[1]);
            i[m++] = t;
            d = true;
        } else
            i[m++] = i[k];
    }
    if (!d) {
        int** r = (int**)malloc(sizeof(int*) * (n + 1));
        int* t = (int*)malloc(sizeof(int) * (n + 1));
        for (int k = n; k >= 0; k--)
            t[k] = 2;
        *o = t;
        *y = n + 1;
        m = 0;
        for (int k = 0; k < n; m++) {
            if (!d && i[k][0] > j[0]) {
                r[m] = j;
                d = true;
            } else
                r[m] = i[k++];
        }
        if (!d)
            r[m] = j;
        return r;
    }
    *y = m;
    int* t = (int*)malloc(sizeof(int) * m);
    for (int k = 0; k < m; k++)
        t[k] = 2;
    *o = t;
    return i;
}
