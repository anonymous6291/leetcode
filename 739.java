class Solution {
    public int[] dailyTemperatures(int[] temp) {
        int n = temp.length, ind = -1;
        int s[] = new int[n];
        int res[] = new int[n];
        for (int i = n - 1; i >= 0; --i) {
            while (ind >= 0 && temp[i] >= temp[s[ind]])
                --ind;
            if (ind < 0)
                res[i] = 0;
            else
                res[i] = s[ind] - i;
            s[++ind] = i;
        }
        return res;
    }
}
