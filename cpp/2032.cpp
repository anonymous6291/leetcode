class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& n1, vector<int>& n2,
                              vector<int>& n3) {
        int f[101] = {0};
        for (int i : n1)
            f[i] = 0b1;
        for (int i : n2)
            f[i] = f[i] | 0b10;
        for (int i : n3)
            f[i] = f[i] | 0b100;
        vector<int> l;
        for (int i = 0; i < 101; i++)
            if (f[i] != 0 && f[i] != 1 && f[i] != 2 && f[i] != 4)
                l.push_back(i);
        return l;
    }
};
