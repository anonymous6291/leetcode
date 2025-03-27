bool prime(int n) {
    if (n == 1)
        return false;
    int s = 2, e = (int)sqrt(n);
    while (s <= e)
        if (n % s++ == 0)
            return false;
    return true;
}

int maximumPrimeDifference(int* nums, int e) {
    int s = 0;
    e--;
    while (s <= e)
        if (prime(nums[s++]))
            break;
    s--;
    while (s <= e)
        if (prime(nums[e--]))
            return e - s + 1;
    return e - s + 1;
}
