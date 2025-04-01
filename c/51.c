/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */

int z;
char** b;
bool* c;
int** p;
char*** a;
int g;

bool diagonal(int a, int b) { return (a == b) || !(a + b); }

int count(int i) {
    if (i == z)
        return 1;
    int e = 0;
    for (int j = 0; j < z; j++)
        if (!c[j]) {
            bool Q = true;
            for (int k = 0; k < i; k++)
                if (diagonal(p[k][0] - i, p[k][1] - j)) {
                    Q = false;
                    break;
                }
            if (Q) {
                c[j] = true;
                p[i][0] = i;
                p[i][1] = j;
                e += count(i + 1);
                c[j] = false;
            }
        }
    return e;
}

void find(int i) {
    if (i == z) {
        for (int j = 0; j < z; j++)
            strcpy(a[g][j], b[j]);
        g++;
        return;
    }
    for (int j = 0; j < z; j++)
        if (!c[j]) {
            bool Q = true;
            for (int k = 0; k < i; k++)
                if (!(abs(p[k][0] - i) - abs(p[k][1] - j))) {
                    Q = false;
                    break;
                }
            if (Q) {
                c[j] = true;
                b[i][j] = 'Q';
                p[i][0] = i;
                p[i][1] = j;
                find(i + 1);
                c[j] = false;
                b[i][j] = '.';
            }
        }
}
char*** solveNQueens(int n, int* m, int** y) {
    z = n;
    b = (char**)malloc(sizeof(char*) * n);
    c = (bool*)malloc(sizeof(bool) * n);
    p = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        b[i] = (char*)malloc(sizeof(char) * (n + 1));
        for (int j = 0; j < n; j++)
            b[i][j] = '.';
        b[i][n] = '\0';
        c[i] = false;
        p[i] = (int*)malloc(sizeof(int) * 2);
    }
    int l = count(0);
    *m = l;
    *y = (int*)malloc(sizeof(int) * l);
    a = (char***)malloc(sizeof(char**) * l);
    for (int i = 0; i < l; i++) {
        a[i] = (char**)malloc(sizeof(char*) * n);
        for (int j = 0; j < n; j++)
            a[i][j] = (char*)malloc(sizeof(char) * (n + 1));
        y[0][i] = n;
    }
    g = 0;
    find(0);
    return a;
}
