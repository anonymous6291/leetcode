class Solution {
private:
    int count(string& c, bool* trav, int n) {
        int cc = 0;
        for (int i = 0; i < n; i++)
            if (!trav[i]) {
                trav[i] = true;
                cc += count(c, trav, n) + 1;
                trav[i] = false;
                int t = i;
                while (i < n && c[t] == c[i])
                    ++i;
                --i;
            }
        return cc;
    }

public:
    int numTilePossibilities(string& tiles) {
        int n = tiles.length();
        for (int i = 0; i < n - 1; i++) {
            int t = i;
            for (int j = i + 1; j < n; j++)
                if (tiles[t] > tiles[j])
                    t = j;
            char s = tiles[i];
            tiles[i] = tiles[t];
            tiles[t] = s;
        }
        bool trav[8] = {false};
        return count(tiles, trav, n);
    }
};
