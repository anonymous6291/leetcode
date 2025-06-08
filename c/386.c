/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int k = 0;

int count(int i, int n) {
    int r = 0;
    for (int j = 0; j < 10; j++, i++) {
        if (i > n)
            return r;
        r += count(i * 10, n) + 1;
    }
    return r;
}

void find(int i, int* l, int n) {
    for (int j = 0; j < 10; j++, i++) {
        if (i > n)
            return;
        l[k++] = i;
        find(i * 10, l, n);
    }
}

int* lexicalOrder(int n, int* r) {
    int c = 0, e = n > 9 ? 9 : n;
    k = 0;
    for (int s = 1; s <= e; s++)
        c += count(s * 10, n) + 1;
    *r = c;
    int* l = (int*)malloc(sizeof(int) * c);
    for (int s = 1; s <= e; s++) {
        l[k++] = s;
        find(s * 10, l, n);
    }
    return l;
}
