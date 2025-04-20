int numRabbits(int* r, int n) {
    int c = 0;
    int f[1000] = {0};
    for (int i = 0; i < n; i++)
        if (f[r[i]] > 0)
            f[r[i]]--;
        else {
            c += r[i] + 1;
            f[r[i]] = r[i];
        }
    return c;
}
