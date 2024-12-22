class Solution {
    public int[] leftmostBuildingQueries(int[] h, int[][] q) {
        int n1 = h.length, n2 = q.length;
        int res[] = new int[n2];
        Map<int[], Integer> map = new HashMap<>();
        for (int i = 0; i < n2; i++) {
            if (q[i][0] > q[i][1]) {
                int t = q[i][0];
                q[i][0] = q[i][1];
                q[i][1] = t;
            }
            map.put(q[i], i);
        }
        Arrays.sort(q, (a, b) -> {
            if (a[1] != b[1])
                return a[1] - b[1];
            return a[0] - b[0];
        });
        Stack<Integer> s = new Stack<>();
        for (int i = n1 - 1, j = n2 - 1; j >= 0; i -= 1) {
            while (!s.isEmpty() && h[i] > h[s.peek()])
                s.pop();
            while (j >= 0 && q[j][1] == i) {
                if (h[q[j][0]] < h[q[j][1]] || q[j][0] == q[j][1])
                    res[map.get(q[j])] = q[j][1];
                else
                    res[map.get(q[j])] = find(s, h[q[j][0]], h);
                --j;
            }
            while (!s.isEmpty() && h[i] == h[s.peek()])
                s.pop();
            s.push(i);
        }
        return res;
    }

    private int find(Stack<Integer> st, int n, int h[]) {
        int s = 0, e = st.size() - 1;
        if (e == -1)
            return -1;
        while (s < e) {
            int m = (s + e) / 2;
            int t = h[st.get(m)];
            if (n < t)
                s = m + 1;
            else
                e = m - 1;
        }
        int t = h[st.get(s)];
        if (n < t)
            return st.get(s);
        if (s == 0)
            return -1;
        return st.get(s - 1);
    }
}
