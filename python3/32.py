class Solution:
    def longestValidParentheses(self, s: str) -> int:
        st = []
        pv = [0] * len(s)
        m = 0
        j = -1
        k = -1
        for i in range(len(s)):
            if s[i] == "(":
                st.append(i)
                pv[i] = 0
            elif st:
                t = st.pop()
                c = i - t + 1 + (pv[t - 1] if t > 0 else 0)
                pv[i] = c
                m = max(m, c)
        return m
