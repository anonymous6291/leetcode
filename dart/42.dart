class Solution {
    int min(int a, int b){
        return (a < b) ? a : b;
    }
    int trap(List<int> h) {
        int n = h.length, tw = 0, j = -1;
        List<int> st = [];
        for(int i = 0; i < n; i++)
            st.add(0);
        for (int i = 0; i < n; i++) {
            while (j > 0 && h[st[j]] < h[i]) {
                if (h[st[j - 1]] >= h[st[j]])
                    tw += (min(h[st[0]], h[i]) - h[st[j]]) * (st[j] - st[j - 1]);
                j--;
            }
            if (j != -1 && h[st[j]] <= h[i])
                st[j] = i;
            else
                st[++j] = i;
        }
        return tw;
    }
}
