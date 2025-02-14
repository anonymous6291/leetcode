class ProductOfNumbers {
    int* pa;
    int i, l;

public:
    ProductOfNumbers() {
        pa = (int*)malloc(sizeof(int) * 40001);
        pa[0] = 1;
        i = 0;
        l = -1;
    }

    void add(int num) {
        i++;
        if (num == 0) {
            pa[i] = 1;
            l = i;
        } else
            pa[i] = pa[i - 1] * num;
    }

    int getProduct(int k) {
        if (l > i - k)
            return 0;
        return (pa[i] / pa[i - k]);
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
