int maximum69Number(int num) {
    int res = 0, p = 0, m = 1;
    while (num > 0) {
        res += 9 * m;
        if (num % 10 == 6) {
            res -= p;
            p = 3 * m;
        }
        m *= 10;
        num /= 10;
    }
    return res;
}
