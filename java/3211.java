class Solution {
    private void find(char bin[], int i, int n, List<String> res) {
        if (i == n) {
            res.add(new String(bin));
            return;
        }
        bin[i] = '1';
        find(bin, i + 1, n, res);
        if (i == 0 || bin[i - 1] == '1') {
            bin[i] = '0';
            find(bin, i + 1, n, res);
        }
    }

    public List<String> validStrings(int n) {
        List<String> list = new ArrayList<>();
        find(new char[n], 0, n, list);
        return list;
    }
}
