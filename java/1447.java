class Solution {
    private int hcf(int a, int b) {
        if (a % b == 0)
            return b;
        return hcf(b, a % b);
    }

    private int itos(char res[], int i, int j) {
        while (i > 0) {
            res[j--] = (char) ((i % 10) + '0');
            i /= 10;
        }
        return j;
    }

    public List<String> simplifiedFractions(int n) {
        List<String> list = new ArrayList<>();
        char res[] = new char[7];
        for (int i = 1; i <= n; i++) {
            int t1 = itos(res, i, 6);
            res[t1--] = '/';
            for (int j = 1; j < i; j++) {
                if (hcf(j, i) == 1) {
                    int t2 = itos(res, j, t1) + 1;
                    list.add(new String(res, t2, 7 - t2));
                }
            }
        }
        return list;
    }
}
