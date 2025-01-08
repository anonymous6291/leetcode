bool isPAS(char* w1, char* w2) {
    int n1 = strlen(w1), n2 = strlen(w2);
    if (n1 > n2)
        return false;
    n2 -= n1;
    for (int i = 0; i < n1; i++)
        if (w1[i] != w2[i])
            return false;
    for (int i = 0; i < n1; i++)
        if (w1[i] != w2[n2 + i])
            return false;
    return true;
}

int countPrefixSuffixPairs(char** w, int n) {
    int count = 0;
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (isPAS(w[j], w[i]))
                ++count;
    return count;
}
