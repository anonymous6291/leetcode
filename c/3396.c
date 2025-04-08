int minimumOperations(int* nums, int n) {
    bool f[101] = {false};
    for (int i = n - 1; i >= 0; i--)
        if (f[nums[i]])
            return i / 3 + 1;
        else
            f[nums[i]] = true;
    return 0;
}
