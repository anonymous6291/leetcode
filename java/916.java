class Solution {
    public List<String> wordSubsets(String[] w1, String[] w2) {
        int c[] = new int[26];
        for (String s : w2) {
            int ar[] = new int[26];
            for (char t : s.toCharArray())
                c[t - 'a'] = Math.max(c[t - 'a'], ++ar[t - 'a']);
        }
        List<String> res = new ArrayList<>();
        for (String s : w1) {
            int ar[] = new int[26];
            for (char t : s.toCharArray())
                ++ar[t - 'a'];
            if (check(ar, c))
                res.add(s);
        }
        return res;
    }

    private boolean check(int ar[], int c[]) {
        for (int i = 0; i < 26; i++)
            if (ar[i] < c[i])
                return false;
        return true;
    }
}
