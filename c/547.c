void ma(int** ic, int i, int n, bool* trav) {
    if (trav[i])
        return;
    trav[i] = true;
    for (int j = 0; j < n; j++)
        if (ic[i][j] == 1)
            ma(ic, j, n, trav);
}

int findCircleNum(int** ic, int n, int* ics) {
    int prov = 0;
    bool* trav = (bool*)malloc(sizeof(bool) * n);
    for (int i = 0; i < n; i++)
        trav[i] = false;
    for (int i = 0; i < n; i++)
        if (!trav[i]) {
            ma(ic, i, n, trav);
            prov++;
        }
    return prov;
}
