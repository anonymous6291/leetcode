class Solution {
private:
    char g(int c) {
        if (c == 0)
            return 'Z';
        return (char)('A' + c - 1);
    }

public:
    string convertToTitle(int c) {
        string s = "";
        while (c > 0) {
            s = g(c % 26) + s;
            c = (c - 1) / 26;
        }
        return s;
    }
};
