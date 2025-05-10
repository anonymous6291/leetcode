#define max(a, b) ((a > b) ? a : b)

long long minSum(int* n1, int l1, int* n2, int l2) {
    long long s1 = 0, s2 = 0;
    int z1 = 0, z2 = 0;
    for (int i = 0; i < l1; i++)
        if (n1[i] == 0)
            z1++;
        else
            s1 += n1[i];
    for (int i = 0; i < l2; i++)
        if (n2[i] == 0)
            z2++;
        else
            s2 += n2[i];
    if (s1 < s2) {
        long long r = s1 + max(s2 - s1 + z2, z1);
        if ((r != s1 && z1 == 0) || (r > s2 && z2 == 0))
            return -1;
        return r;
    } else {
        long long r = s2 + max(s1 - s2 + z1, z2);
        if ((r != s2 && z2 == 0) || (r > s1 && z1 == 0))
            return -1;
        return r;
    }
}
