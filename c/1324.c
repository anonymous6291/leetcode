/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#define max(x, y) ((x > y) ? x : y)

char** printVertically(char* w, int* y) {
    int c = 1, m = 0, n = strlen(w), p = 0;
    for (int i = 0; i < n; i++)
        if (w[i] == ' ') {
            m = max(m, i - p);
            p = i + 1;
            c++;
        }
    m = max(n - p, m);
    *y = m;
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
    char** t = (char**)malloc(sizeof(char*) * m);
    for (int j = 0; j < m; j++) {
        int x = c - 1;
        while (x >= 0 && r[j][x] == ' ')
            x--;
        t[j] = (char*)malloc(sizeof(char) * (x + 2));
        t[j][x + 1] = '\0';
        while (x >= 0) {
            t[j][x] = r[j][x];
            x--;
        }
    }
    return t;
}
