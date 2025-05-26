#define max(x, y) ((x > y) ? x : y)

class Solution {
public:
    vector<string> printVertically(string& w) {
        int c = 1, m = 0, n = w.length(), p = 0;
        for (int i = 0; i < n; i++)
            if (w[i] == ' ') {
                m = max(m, i - p);
                p = i + 1;
                c++;
            }
        m = max(n - p, m);
        char** r = (char**)malloc(sizeof(char*) * m);
        for (int i = 0; i < m; i++)
            r[i] = (char*)malloc(sizeof(char) * c);
        int i = 0;
        for (int j = 0; j < c; j++) {
            for (int k = 0; k < m; k++) {
                if (i < n && w[i] != ' ')
                    r[k][j] = w[i++];
                else
                    r[k][j] = ' ';
            }
            i++;
        }
        vector<string> t;
        for (int j = 0; j < m; j++) {
            int x = c - 1;
            while (x >= 0 && r[j][x] == ' ')
                x--;
            string y = "";
            while (x >= 0)
                y = r[j][x--] + y;
            t.push_back(y);
        }
        return t;
    }
};
