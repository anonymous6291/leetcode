class Solution {
    public String decodeMessage(String key, String message) {
        char tf[] = new char[26];
        int n = key.length();
        char s = 'a';
        for (int i = 0; i < n; i++) {
            int t = key.charAt(i) - 'a';
            if (t > -1 && tf[t] == 0)
                tf[t] = s++;
        }
        n = message.length();
        char res[] = new char[n];
        for (int i = 0; i < n; i++) {
            char t = message.charAt(i);
            if (t == ' ')
                res[i] = ' ';
            else
                res[i] = tf[t - 'a'];
        }
        return new String(res);
    }
}
