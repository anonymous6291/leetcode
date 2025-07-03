class Solution {
public:
    string interpret(string& c) {
        int n = c.length();
        string r = "";
        for (int j = 0; j < n; j++) {
            if (c[j] == 'G')
                r += 'G';
            else if (c[j + 1] == ')') {
                r += 'o';
                j++;
            } else {
                r += "al";
                j += 3;
            }
        }
        return r;
    }
};
