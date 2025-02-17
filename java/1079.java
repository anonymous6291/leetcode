class Solution {
    public int numTilePossibilities(String tiles) {
        char c[] = tiles.toCharArray();
        Arrays.sort(c);
        int n = c.length;
        boolean trav[] = new boolean[n];
        return count(c, trav, n);
    }

    private int count(char c[], boolean trav[], int n) {
        int count = 0;
        for (int i = 0; i < n; i++)
            if (!trav[i]) {
                trav[i] = true;
                count += count(c, trav, n) + 1;
                trav[i] = false;
                int t = i;
                while (i < n && c[t] == c[i])
                    ++i;
                --i;
            }
        return count;
    }
}
