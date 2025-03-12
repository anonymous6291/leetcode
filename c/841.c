void dfs(int** room, int* rcs, int i, bool* trav) {
    if (trav[i])
        return;
    trav[i] = true;
    for (int j = 0; j < rcs[i]; j++)
        dfs(room, rcs, room[i][j], trav);
}

bool canVisitAllRooms(int** rooms, int n, int* rcs) {
    bool* trav = (bool*)malloc(sizeof(bool) * n);
    for (int i = 0; i < n; i++)
        trav[i] = false;
    dfs(rooms, rcs, 0, trav);
    for (int i = 0; i < n; i++)
        if (!trav[i])
            return false;
    return true;
}
