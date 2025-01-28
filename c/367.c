bool isPerfectSquare(int num) {
    int s = 1, e = 46340;
    while (s < e) {
        int m = (s + e) / 2;
        int t = m * m;
        if (t == num)
            return true;
        if (t < num)
            s = m + 1;
        else
            e = m - 1;
    }
    return (s * s == num);
}
