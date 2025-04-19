class Solution {
    int max(int x, int y){
        return (x > y) ? x : y;
    }

    int longestValidParentheses(String s) {
        int n = s.length;
        List<int> st = [];
        List<int> pv = [];
        for(int i = 0; i < n; i++){
            st.add(0);
            pv.add(0);
        }
        int m = 0, j = -1, k = -1;
        for (int i = 0; i < n; i++)
            if (s[i] == '(') {
                st[++j] = i;
                pv[i] = 0;
            } else if (j != -1) {
                int t = st[j--];
                int c = i - t + 1 + ((t > 0) ? pv[t - 1] : 0);
                pv[i] = c;
                m = max(m, c);
            }
        return m;
    }
}
