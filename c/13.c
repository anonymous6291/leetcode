int get(char c) {
    if (c == 'I')
        return 1;
    else if (c == 'V')
        return 5;
    else if (c == 'X')
        return 10;
    else if (c == 'L')
        return 50;
    else if (c == 'C')
        return 100;
    else if (c == 'D')
        return 500;
    return 1000;
}

int romanToInt(char* s) {
    int n = strlen(s), num = 0;
    char p = '0';
    for (int i = 0; i < n; i++) {
        char c = s[i];
        num += get(c);
        if (i != 0) {
            if ((c == 'V' || c == 'X') && p == 'I')
                num = num - 2;
            else if ((c == 'L' || c == 'C') && p == 'X')
                num = num - 20;
            else if ((c == 'D' || c == 'M') && p == 'C')
                num = num - 200;
        }
        p = c;
    }
    return num;
}
