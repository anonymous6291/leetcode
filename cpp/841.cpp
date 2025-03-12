class Solution {
private:
    void dfs(vector<vector<int>>& rooms, int i, vector<bool>& trav) {
        if (trav[i])
            return;
        trav[i] = true;
        for (int j : rooms[i])
            dfs(rooms, j, trav);
    }

public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> trav(rooms.size(), false);
        dfs(rooms, 0, trav);
        for (bool b : trav)
            if (!b)
                return false;
        return true;
    }
};
