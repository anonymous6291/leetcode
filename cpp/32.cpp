#define MAX(x, y) ((x > y) ? x : y)

class Solution {
public:
    int longestValidParentheses(string& s) {
        int n = s.length();
        vector<int> st(n);
        vector<int> pv(n);
        int m = 0, j = -1, k = -1;
        for (int i = 0; i < n; i++)
            if (s[i] == '(') {
                st[++j] = i;
                pv[i] = 0;
            } else if (j != -1) {
                int t = st[j--];
                int c = i - t + 1 + ((t > 0) ? pv[t - 1] : 0);
                pv[i] = c;
                m = MAX(m, c);
            }
        return m;
    }
};
