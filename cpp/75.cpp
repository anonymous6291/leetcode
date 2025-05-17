class Solution {
public:
    void sortColors(vector<int>& n) {
        int a = 0, b = n.size() - 1;
        for (int i = 0; i <= b; i++) {
            if (n[i] == 0) {
                n[i] = 1;
                n[a++] = 0;
            } else if (n[i] == 2) {
                n[i--] = n[b];
                n[b--] = 2;
            }
        }
    }
};
