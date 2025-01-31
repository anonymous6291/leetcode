int findMaxConsecutiveOnes(int* nums, int n) {
    int m = 0, c = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] == 1)
            c++;
        else {
            m = m > c ? m : c;
            c = 0;
        }
    return (m > c ? m : c);
}
