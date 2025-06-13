typedef struct {
    int** m;
} NumMatrix;

NumMatrix* numMatrixCreate(int** m, int r, int* o) {
    NumMatrix* k = (NumMatrix*)malloc(sizeof(NumMatrix));
    int c = o[0];
    for (int i = 0; i < r; i++)
        for (int j = 1; j < c; j++)
            m[i][j] += m[i][j - 1];
    for (int i = 0; i < c; i++)
        for (int j = 1; j < r; j++)
            m[j][i] += m[j - 1][i];
    k->m = m;
    return k;
}

int numMatrixSumRegion(NumMatrix* o, int x, int y, int b, int c) {
    return o->m[b][c] - (x > 0 ? o->m[x - 1][c] : 0) -
           (y > 0 ? o->m[b][y - 1] : 0) +
           ((x > 0 && y > 0) ? o->m[x - 1][y - 1] : 0);
}

void numMatrixFree(NumMatrix* obj) {}

/**
 * Your NumMatrix struct will be instantiated and called as such:
 * NumMatrix* obj = numMatrixCreate(matrix, matrixSize, matrixColSize);
 * int param_1 = numMatrixSumRegion(obj, row1, col1, row2, col2);

 * numMatrixFree(obj);
*/
