class Solution {
    List<int> twoOutOfThree(List<int> n1, List<int> n2, List<int> n3) {
        List<int> f = [];
        for (int i = 0; i < 101; i++)
            f.add(0);
        for (int i in n1)
            f[i] = 1;
        for (int i in n2)
            f[i] = f[i] | 2;
        for (int i in n3)
            f[i] = f[i] | 4;
        List<int> l = [];
        for (int i = 0; i < 101; i++)
            if (f[i] != 0 && f[i] != 1 && f[i] != 2 && f[i] != 4)
                l.add(i);
        return l;
    }
}
