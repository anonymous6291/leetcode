class Solution {
public:
    bool isValid(string s) {
        int n = s.length(), i = -1;
        char* stack = (char*)malloc(sizeof(char) * n);
        for (int j = 0; j < n; j++)
            if (s[j] == '(' || s[j] == '{' || s[j] == '[')
                stack[++i] = s[j];
            else {
                if (i == -1 || (s[j] == ')' && stack[i] != '(') ||
                    (s[j] == '}' && stack[i] != '{') ||
                    (s[j] == ']' && stack[i] != '['))
                    return false;
                --i;
            }
        return i == -1;
    }
};
