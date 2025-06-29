class Solution {
public:
    bool isBalanced(string& n) {
        int l = n.length(), b = 0;
        for (int i = 0; i < l; i += 2)
            b += n[i] - 48;
        for (int i = 1; i < l; i += 2)
            b -= n[i] - 48;
        return b == 0;
    }
};
