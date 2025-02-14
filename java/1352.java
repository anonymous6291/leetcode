class ProductOfNumbers {
    static final int pa[] = new int[40001];
    int i, l = -1;

    public ProductOfNumbers() {
        pa[0] = 1;
        i = 0;
    }

    public void add(int num) {
        i++;
        if (num == 0) {
            l = i;
            pa[i] = 1;
        } else
            pa[i] = pa[i - 1] * num;
    }

    public int getProduct(int k) {
        k = i - k;
        if (l > k)
            return 0;
        return pa[i] / pa[k];
    }
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers obj = new ProductOfNumbers();
 * obj.add(num);
 * int param_2 = obj.getProduct(k);
 */
