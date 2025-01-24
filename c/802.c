/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool find(int** g, int* gcs, int i, bool* pter, bool* trav) {
    if (trav[i])
        return pter[i];
    trav[i] = true;
    int n = gcs[i];
    for (int j = 0; j < n; j++)
        if (!find(g, gcs, g[i][j], pter, trav))
            return false;
    pter[i] = true;
    return true;
}

int* eventualSafeNodes(int** g, int n, int* gcs, int* rs) {
    int* res = (int*)malloc(sizeof(int) * n);
    bool* pter = (bool*)malloc(sizeof(bool) * n);
    bool* trav = (bool*)malloc(sizeof(bool) * n);
    for (int i = 0; i < n; i++) {
        pter[i] = false;
        trav[i] = false;
    }
    int l = 0;
    for (int i = 0; i < n; i++)
        if (find(g, gcs, i, pter, trav))
            res[l++] = i;
    *rs = l;
    return res;
}
