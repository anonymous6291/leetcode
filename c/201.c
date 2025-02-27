int rangeBitwiseAnd(int l, int r) {
    int res = 0, m = 1;
    bool f = true;
    while (l > 0 || r > 0) {
        if (f)
            f = false;
        else
            m <<= 1;
        if ((l & 1) != (r & 1))
            res = 0;
        else if ((l & 1) == 1)
            res |= m;
        l >>= 1;
        r >>= 1;
    }
    return res;
}
