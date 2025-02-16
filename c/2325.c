char* decodeMessage(char* key, char* message) {
    char tf[26] = {0};
    int n = strlen(key);
    char s = 'a';
    for (int i = 0; i < n; i++) {
        int t = key[i] - 'a';
        if (t > -1 && tf[t] == 0)
            tf[t] = s++;
    }
    n = strlen(message);
    for (int i = 0; i < n; i++)
        if (message[i] != ' ')
            message[i] = tf[message[i] - 'a'];
    return message;
}
