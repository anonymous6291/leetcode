char* convertToBase7(int num) {
    if (num == 0) {
        char* res = (char*)malloc(sizeof(char) * 2);
        res[0] = '0';
        res[1] = '\0';
        return res;
    }
    int n = (num < 0) ? (-num) : num;
    int l = 0;
    while (n > 0) {
        ++l;
        n /= 7;
    }
    if (num < 0)
        ++l;
    char* res = (char*)malloc(sizeof(char) * (l + 1));
    res[l--] = '\0';
    n = (num < 0) ? (-num) : num;
    while (n > 0) {
        res[l--] = (char)(48 + (n % 7));
        n /= 7;
    }
    if (num < 0)
        res[0] = '-';
    return res;
}
