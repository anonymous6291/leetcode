class Solution {
    public boolean checkIfCanBreak(String s1, String s2) {
        int f[] = new int[26];
        for (int i = s1.length() - 1; i >= 0; i--) {
            f[s1.charAt(i) - 'a']++;
            f[s2.charAt(i) - 'a']--;
        }
        return check1(f) || check2(f);
    }

    private boolean check1(int f[]) {
        int p = 0;
        for (int i = 0; i < 26; i++) {
            p += f[i];
            if (p < 0)
                return false;
        }
        return true;
    }

    private boolean check2(int f[]) {
        int p = 0;
        for (int i = 0; i < 26; i++) {
            p -= f[i];
            if (p < 0)
                return false;
        }
        return true;
    }
}
