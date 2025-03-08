class Solution {
public:
    int minimumRecolors(string& blocks, int k) {
        int s = 0, e = 0, w = 0, n = blocks.length();
        while (e < k)
            if (blocks[e++] == 'W')
                w++;
        int minw = w;
        while (e < n) {
            if (blocks[e++] == 'W')
                w++;
            if (blocks[s++] == 'W')
                w--;
            if (w < minw)
                minw = w;
        }
        return minw;
    }
};
