class Solution {
private:
    char getS(char c, int s) { return (char)(((c - 71 + s) % 26) + 97); }

public:
    string shiftingLetters(string& c, vector<vector<int>>& sh) {
        int n1 = c.length(), n2 = sh.size(), ps = 0;
        vector<int> ch(n1 + 1, 0);
        for (int i = 0; i < n2; i++) {
            ch[sh[i][0]] += sh[i][2] * 2 - 1;
            ch[sh[i][1] + 1] += -(sh[i][2] * 2 - 1);
        }
        for (int i = 0; i < n1; i++) {
            ps += ch[i];
            c[i] = getS(c[i], ps % 26);
        }
        return c;
    }
};
