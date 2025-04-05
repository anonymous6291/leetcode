int longestSubarray(int* nums, int n) {
    int p = 0, c = 0, mc = 0, i = 0;
    while (i < n) {
        if (!nums[i++])
            c++;
        while (c == 2)
            c -= nums[p++] ^ 1;
        while (i < n) {
            if (!nums[i])
                if (c == 1)
                    break;
                else
                    c = 1;
            i += 1;
        }
        if (i - p - 1 > mc)
            mc = i - p - 1;
    }
    return mc;
}
