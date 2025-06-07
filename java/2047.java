class Solution {
    private boolean valid(String s) {
        if (s.isEmpty())
            return false;
        int n = s.length();
        boolean h = false;
        for (int i = 0; i < n; i++) {
            char x = s.charAt(i);
            if (Character.isLowerCase(x)) {
            } else if (x == '-') {
                if (h || i == 0 || i + 1 == n || !Character.isLowerCase(s.charAt(i - 1))
                        || !Character.isLowerCase(s.charAt(i + 1)))
                    return false;
                h = true;
            } else if (Character.isDigit(x) || i + 1 != n)
                return false;
        }
        return true;
    }

    public int countValidWords(String s) {
        int c = 0;
        for (String t : s.split(" "))
            if (valid(t))
                c++;
        return c;
    }
}
