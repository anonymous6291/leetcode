class Solution {
    public boolean isValid(String s) {
        char stack[] = new char[s.length()];
        int i = -1;
        for (char c : s.toCharArray())
            if (c == '(' || c == '{' || c == '[')
                stack[++i] = c;
            else {
                if (i == -1 || (c == ')' && stack[i] != '(') || (c == '}' && stack[i] != '{')
                        || (c == ']' && stack[i] != '['))
                    return false;
                --i;
            }
        return i == -1;
    }
}
