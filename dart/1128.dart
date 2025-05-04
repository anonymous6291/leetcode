class Solution {
    int numEquivDominoPairs(List<List<int>> d) {
        List<List<int>> f = [];
        for(int i = 0; i < 10; i++)
            f.add([0, 0, 0, 0, 0, 0, 0, 0, 0, 0]);
        int r = 0;
        for (List<int> i in d)
            if (i[0] < i[1])
                r += f[i[0]][i[1]]++;
            else
                r += f[i[1]][i[0]]++;
        return r;
    }
}
