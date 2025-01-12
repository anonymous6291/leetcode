class Solution {
    public boolean canBeValid(String s, String l) {
        int n = s.length(), j = -1;
        if (n % 2 != 0)
            return false;
        Queue<Integer> z = new LinkedList<>();
        int o[] = new int[n];
        for (int i = 0; i < n; i++) {
            if (l.charAt(i) == '0')
                z.offer(i);
            else if (s.charAt(i) == '(')
                o[++j] = i;
            else if (j == -1) {
                if (z.isEmpty())
                    return false;
                z.poll();
            } else
                --j;
        }
        int k = 0;
        while (k <= j && !z.isEmpty()) {
            if (z.peek() > o[k])
                ++k;
            z.poll();
        }
        return k > j;
    }
}
