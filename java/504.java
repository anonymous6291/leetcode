class Solution {
    public String convertToBase7(int num) {
        if (num == 0)
            return "0";
        int n = (num < 0) ? (-num) : num;
        StringBuilder sb = new StringBuilder("");
        while (n > 0) {
            sb.append((char) (48 + (n % 7)));
            n /= 7;
        }
        if (num < 0)
            sb.append('-');
        return sb.reverse().toString();
    }
}
