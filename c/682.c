int stoi(char* i) {
    int res = 0, mul = 1;
    if (i[0] == '-') {
        mul = -1;
        i++;
    }
    while (*i) {
        res = res * 10 + (*i - 48);
        i++;
    }
    return res * mul;
}

int calPoints(char** op, int ops) {
    int* stack = (int*)malloc(sizeof(int) * ops);
    int ind = 0;
    for (int i = 0; i < ops; i++) {
        if (op[i][0] == '+') {
            stack[ind] = stack[ind - 1] + stack[ind - 2];
            ind++;
        } else if (op[i][0] == 'D') {
            stack[ind] = stack[ind - 1] * 2;
            ind++;
        } else if (op[i][0] == 'C')
            --ind;
        else
            stack[ind++] = stoi(op[i]);
    }
    int res = 0;
    while (ind > 0)
        res += stack[--ind];
    return res;
}
