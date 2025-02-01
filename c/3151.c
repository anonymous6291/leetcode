bool isArraySpecial(int* nums, int n) {
    int p = (nums[0] & 1) ^ 1;
    for (int i = 0; i < n; i++) {
        if ((nums[i] & 1) == p)
            return false;
        p ^= 1;
    }
    return true;
}
