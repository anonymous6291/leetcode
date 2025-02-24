class Solution {
    public String thousandSeparator(int n) {
        if (n == 0)
            return "0";
        StringBuilder sb = new StringBuilder("");
        int c = 0;
        while (n > 0) {
            if (c == 3) {
                sb.append('.');
                c = 0;
            }
            sb.append(n % 10);
            n /= 10;
            c++;
        }
        return sb.reverse().toString();
    }
}
