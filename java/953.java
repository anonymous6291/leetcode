class Solution {
    public boolean isAlienSorted(String[] w, String o) {
        int c[] = new int[26];
        for (int i = 0; i < 26; i++)
            c[o.charAt(i) - 97] = i;
        String s1 = w[0];
        int n = w.length, n1 = s1.length();
        for (int i = 1; i < n; i++) {
            String s2 = w[i];
            int n2 = s2.length(), j = 0;
            while (j < n1 && j < n2 && s1.charAt(j) == s2.charAt(j))
                j++;
            if (j != n1 && j == n2)
                return false;
            while (j < n1)
                if (j == n2 || c[s1.charAt(j) - 97] > c[s2.charAt(j) - 97])
                    return false;
                else if (s1.charAt(j) != s2.charAt(j++))
                    break;
            n1 = n2;
            s1 = s2;
        }
        return true;
    }
}
