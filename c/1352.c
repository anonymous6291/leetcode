typedef struct {
    int* pa;
    int i, l;
} ProductOfNumbers;

ProductOfNumbers* productOfNumbersCreate() {
    ProductOfNumbers* p = (ProductOfNumbers*)malloc(sizeof(ProductOfNumbers));
    p->pa = (int*)malloc(sizeof(int) * 40001);
    p->pa[0] = 1;
    p->i = 0;
    p->l = -1;
    return p;
}

void productOfNumbersAdd(ProductOfNumbers* obj, int num) {
    int t = ++(obj->i);
    if (num == 0) {
        obj->l = t;
        obj->pa[t] = 1;
    } else
        obj->pa[t] = obj->pa[t - 1] * num;
}

int productOfNumbersGetProduct(ProductOfNumbers* obj, int k) {
    int t = obj->i;
    if (obj->l > t - k)
        return 0;
    return (obj->pa[t] / obj->pa[t - k]);
}

void productOfNumbersFree(ProductOfNumbers* obj) {
    free(obj->pa);
    free(obj);
}

/**
 * Your ProductOfNumbers struct will be instantiated and called as such:
 * ProductOfNumbers* obj = productOfNumbersCreate();
 * productOfNumbersAdd(obj, num);

 * int param_2 = productOfNumbersGetProduct(obj, k);

 * productOfNumbersFree(obj);
*/
