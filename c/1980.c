char* findDifferentBinaryString(char** nums, int n) {
    char* res = (char*)malloc(sizeof(char) * (n + 1));
    res[n] = '\0';
    for (int i = 0; i < n; i++)
        res[i] = (nums[i][i] == '1') ? '0' : '1';
    return res;
}
