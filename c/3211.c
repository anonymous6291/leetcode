/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int count;

void cal(int i, int n, int one) {
    if (i == n) {
        count++;
        return;
    }
    cal(i + 1, n, 1);
    if (one)
        cal(i + 1, n, 0);
}

void find(char* curr, int i, int n, char** res) {
    if (i == n) {
        strcpy(res[--count], curr);
        return;
    }
    curr[i] = '1';
    find(curr, i + 1, n, res);
    if (i == 0 || curr[i - 1] == '1') {
        curr[i] = '0';
        find(curr, i + 1, n, res);
    }
}

char** validStrings(int n, int* rs) {
    count = 0;
    char* curr = (char*)malloc(sizeof(char) * (n + 1));
    curr[n] = '\0';
    cal(0, n, 1);
    *rs = count;
    char** res = (char**)malloc(sizeof(char*) * count);
    for (int i = 0; i < count; i++)
        res[i] = (char*)malloc(sizeof(char) * (n + 1));
    find(curr, 0, n, res);
    return res;
}
