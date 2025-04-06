int len(int i) {
    int l = 0;
    while (i > 0) {
        l++;
        i /= 10;
    }
    return l;
}

int compress(char* c, int n) {
    int j = 0, f = 1;
    char t = c[0];
    for (int i = 1; i < n; i++) {
        if (c[i] != t) {
            c[j++] = t;
            if (f != 1) {
                int l1 = len(f), l2 = l1;
                while (f) {
                    c[j + --l1] = (char)((f % 10) + 48);
                    f /= 10;
                }
                j += l2;
            }
            t = c[i];
            f = 1;
        } else
            f++;
    }
    c[j++] = t;
    if (f != 1) {
        int l1 = len(f), l2 = l1;
        while (f) {
            c[j + --l1] = (char)((f % 10) + 48);
            f /= 10;
        }
        j += l2;
    }
    return j;
}
