class Solution {
private:
    int find(int* c, int i) {
        if (c[i] == i)
            return c[i];
        c[i] = find(c, c[i]);
        return c[i];
    }

public:
    string smallestEquivalentString(string& x, string& y, string& b) {
        int n = x.length(), l = b.length();
        int c[26];
        for (int i = 0; i < 26; i++)
            c[i] = i;
        for (int i = 0; i < n; i++) {
            int g = find(c, x[i] - 97), h = find(c, y[i] - 97);
            if (g < h)
                c[h] = g;
            else
                c[g] = h;
        }
        string r = "";
        for (int i = 0; i < l; i++)
            r += (char)(find(c, b[i] - 97) + 97);
        return r;
    }
};
