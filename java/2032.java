class Solution {
    public List<Integer> twoOutOfThree(int[] n1, int[] n2, int[] n3) {
        int f[] = new int[101];
        for (int i : n1)
            f[i] = 0b1;
        for (int i : n2)
            f[i] = f[i] | 0b10;
        for (int i : n3)
            f[i] = f[i] | 0b100;
        List<Integer> l = new ArrayList<>();
        for (int i = 0; i < 101; i++)
            if (f[i] != 0 && f[i] != 1 && f[i] != 2 && f[i] != 4)
                l.add(i);
        return l;
    }
}
