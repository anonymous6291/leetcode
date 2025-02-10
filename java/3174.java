class Solution {
    public String clearDigits(String s) {
        char stack[] = new char[s.length()];
        int i = 0;
        for (char c : s.toCharArray())
            if (Character.isDigit(c))
                --i;
            else
                stack[i++] = c;
        if (i <= 0)
            return "";
        return new String(stack, 0, i);
    }
}
