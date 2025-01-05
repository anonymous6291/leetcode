char getS(char c, int s) { return (char)(((c - 71 + s) % 26) + 97); }

char* shiftingLetters(char* c, int** sh, int n2, int* scs) {
    int n1 = strlen(c), ps = 0;
    int* ch = (int*)malloc(sizeof(int) * (n1 + 1));
    for (int i = 0; i < n1; i++)
        ch[i] = 0;
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
