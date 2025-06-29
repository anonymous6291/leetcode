bool isBalanced(char* n) {
    int l = strlen(n), b = 0;
    for (int i = 0; i < l; i += 2)
        b += n[i] - 48;
    for (int i = 1; i < l; i += 2)
        b -= n[i] - 48;
    return b == 0;
}
