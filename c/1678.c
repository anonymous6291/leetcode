char* interpret(char* c) {
    int n = strlen(c), i = 0;
    char* r = (char*)malloc(sizeof(char) * (n + 1));
    for (int j = 0; j < n; j++) {
        if (c[j] == 'G')
            r[i++] = 'G';
        else if (c[j + 1] == ')') {
            r[i++] = 'o';
            j++;
        } else {
            r[i++] = 'a';
            r[i++] = 'l';
            j += 3;
        }
    }
    r[i] = '\0';
    return r;
}
