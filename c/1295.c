int findNumbers(int* n, int l) {
    int c = 0;
    for (int i = 0; i < l; i++)
        if ((n[i] > 9 && n[i] < 100) || (n[i] > 999 && n[i] < 10000) ||
            n[i] == 100000)
            c++;
    return c;
}
