char* clearDigits(char* s) {
    int i = 0, n = strlen(s);
    for (int j = 0; j < n; j++)
        if (s[j] <= '9')
            --i;
        else
            s[i++] = s[j];
    if (i <= 0)
        s[0] = '\0';
    else
        s[i] = '\0';
    return s;
}
