bool sw(char* p, char* w) {
    int i = 0;
    while (p[i] != '\0') {
        if (w[i] == '\0' || w[i] != p[i])
            return false;
        ++i;
    }
    return true;
}

int prefixCount(char** w, int n, char* p) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (sw(p, w[i]))
            ++count;
    return count;
}
