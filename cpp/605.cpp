class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int l = f.size();
        for (int i = f[0] * 2; i < l && n > 0; i++)
            if (f[i] == 0 && (i == l - 1 || f[i + 1] == 0)) {
                n--;
                i++;
            } else if (f[i] == 1)
                i++;
        return n == 0;
    }
};
