int maxProduct(int n) {
    int x = -1, y = -1;
    while (n > 0) {
        int t = n % 10;
        n /= 10;
        if (t >= x) {
            y = x;
            x = t;
        } else if (t > y)
            y = t;
    }
    return x * y;
}
