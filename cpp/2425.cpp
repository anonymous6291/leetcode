class Solution {
public:
    int xorAllNums(vector<int>& n1, vector<int>& n2) {
        int res = 0;
        if (n1.size() % 2 != 0)
            for (int i : n2)
                res ^= i;
        if (n2.size() % 2 != 0)
            for (int i : n1)
                res ^= i;
        return res;
    }
};
