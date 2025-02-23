class Solution {
    public String restoreString(String s, int[] ind) {
        int n = ind.length;
        char res[] = new char[n];
        for (int i = 0; i < n; i++)
            res[ind[i]] = s.charAt(i);
        return new String(res);
    }
}
