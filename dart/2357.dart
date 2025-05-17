class Solution {
    int minimumOperations(List<int> n) {
        List<bool> f = [];
        for(int i = 0; i < 101; i++)
            f.add(false);
        int c = 0;
        for (int i in n) {
            if (i != 0 && !f[i]) {
                f[i] = true;
                c++;
            }
        }
        return c;
    }
}
